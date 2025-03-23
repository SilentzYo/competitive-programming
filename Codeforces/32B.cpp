#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,o=""; cin >> s;
	for (int i = 0; i<s.length(); i++) {
		if (s[i] == '.') {
			o += '0';
		} else if (s[i] == '-') {
			if (i+1 < s.length() && s[i+1] == '-') {
				o += '2';
			} else {
				o += '1';
			}
			i++;
		}
	}
	cout << o;
}
