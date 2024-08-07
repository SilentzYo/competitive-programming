#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		if (s.length()%2 != 0) {
			cout << "NO\n";
			continue;
		}
		if (s.substr(0,s.length()/2) == s.substr(s.length()/2,s.length()/2)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
