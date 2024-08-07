#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

bool check() {
	int n; string s; cin >> n >> s;
	unordered_map<char, int> m(26);
	for (int i = 0; i<n; i++) {
		if (m[s[i]] > 0 && s[i-1] != s[i]) {
			return false;
		}
		m[s[i]]++;
	}
	return true;
}
int main() {
	int t; cin >> t;
	while (t--) {
		cout << (check() ? "YES\n" : "NO\n");
	}
}
