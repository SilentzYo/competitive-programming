#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	if (int(s[0]) > 96) {
		s[0] = (int(s[0]) -32);
	}
	cout << s;
}
