#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int n; cin >> n;
	while (n--) {
		string s; cin >> s;
		cout << (s.length() > 10 ? s[0] + to_string(s.length() - 2) + s[s.length()-1] : s) << endl;
	}
}
