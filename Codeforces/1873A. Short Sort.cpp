#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		if (s == "abc" || s == "bac" || s == "acb" || s == "cba") {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
