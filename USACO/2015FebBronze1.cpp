#include <bits/stdc++.h>
using namespace std;

int main() {
	string s, t, n; 
	cin >> s >> t;
	for (int i = 0; i <= s.length(); i++) {
		n += s[i];
		if (n.length() >= t.length() && n.substr(n.length() - t.length()) == t) {
			n.resize(n.length()-t.length());
		}
	}
	cout << n;
	return 0;
}