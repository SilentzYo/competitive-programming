#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int n = int(s.length());
	for(char c : s) {
		if (int(c) < 96) {
			n--;
		}
	}
	if (n==0 || (n==1 && int(s[0])>96)) {
		string t = "";
		for (char c : s) {
			if (int(c) > 96) {
				t.push_back(c-32);
			} else {
				t.push_back(c+32);
			}
		}
		s=t;
	} 
	cout << s;
}
