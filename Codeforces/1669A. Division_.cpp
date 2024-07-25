#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int x; cin >> x;
		cout << "Division ";
		if (x>=1900) {
			cout << "1\n";
		} else if (x>=1600) {
			cout << "2\n";
		} else if (x>=1400) {
			cout << "3\n";
		} else {
			cout << "4\n";
		}
	}
}
