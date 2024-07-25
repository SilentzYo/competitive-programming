#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; string s; cin >> n >> s;
	if (n<26) {
		cout << "NO";
		return 0;
	}
	set<char> x;
	for (char c : s) {
		if (int(c) < 96) {
			x.insert(c + ' ');
		} else {
			x.insert(c);
		}
	}
	cout << ((x.size() == 26) ? "YES" : "NO");

}
