// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	bool t = false; int ct = 0;
	for (char c : s) {
		if (c == '0') {
			if (t) {
				ct++;
			} else {
				t = true; ct = 1;
			}
		} else {
			if (!t) {
				ct++;
			} else {
				t = false; ct = 1;
			}
		}
		if (ct >= 7) {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
