#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	string s = "cdefors";
	while (t--) {
		char c; cin >> c;
		bool x = false;
		for (char d : s) {
			if (d==c) {
				x = true;
				continue;
			}
		}
		cout << (x? "YES\n" : "NO\n");
	}
}
