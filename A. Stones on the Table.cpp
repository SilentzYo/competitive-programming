// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,x; string s; cin >> n >> s; x=0;
	stack<char> t;
	for (char c : s) {
		if (t.empty() || t.top() != c) {
			t.push(c);
		} else {
			x++;
		}
	}
	cout << x;
}
