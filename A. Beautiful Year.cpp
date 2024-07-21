// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int y; cin >> y;
	while (true) {
		y++;
		string s = to_string(y);
		unordered_set<char> g(s.begin(),s.end()); 
		if (g.size() == s.size()) {
			cout << y;
			return 0;
		}
	}
}
