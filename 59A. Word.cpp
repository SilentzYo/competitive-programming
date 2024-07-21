// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int caps = 0;
	for (char c : s) {
		if (int(c) < 97) {
			caps++;
		} else {
			caps--;
		}
	}
	for (int i = 0; i<int(s.length()); i++) {
		if (caps <= 0 && int(s[i]) < 96) {
			s[i] = (int(s[i]+32));
		} else if (caps > 0 && int(s[i]) > 96){
			s[i] = (int(s[i]-32));
		}
	}
	cout << s;
	

}
