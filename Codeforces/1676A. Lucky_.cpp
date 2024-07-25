#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string n; cin >> n;
		cout << ((int(n[0]) + int(n[1]) + int(n[2]) == (int(n[3]) + int(n[4]) + int(n[5])) ) ? "YES" : "NO") << endl;
	}
}
