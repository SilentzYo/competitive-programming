#include <bits/stdc++.h>
using namespace std;

int main() {
	set<char> sit;
	while (true) {
		string s; cin >> s;
		for (char c : s) {
			if (int(c) > 96 && int(c)<123) {
				sit.insert(c);
			} else if (c == '}') {
				cout << sit.size();
				return 0;
			}
		}
	}
}
