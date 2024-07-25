#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,o; cin >> s;
	for (char c : s) {
		int t = int(c);
		if (t<96) {
			t+=32;
		}
		if (t!=97 && t!=101 && t!=105 && t!=111 && t!=117 && t!=121) {
			o+=".";
			o+=t;
		}
	}
	cout << o;
}
