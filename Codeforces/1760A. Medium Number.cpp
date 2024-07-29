#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int a,b,c; cin >> a >> b >> c;
		if (max(a,b) < c) {
			cout << max(a,b);
		} else {
			if (min(a,b) > c) {
				cout << min(a,b);
			} else {
				cout << c;
			}
		}
		cout << "\n";
	}
}
