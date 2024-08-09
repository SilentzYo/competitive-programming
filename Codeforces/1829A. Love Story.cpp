#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string s; cin >> s; 
		int c = 0; string codeforces = "codeforces";
		for (int i = 0; i < 10; i++) {
			if (s[i] != codeforces[i]) {
				c++;
			}
		}
		cout << c << "\n";
	}
}
