#include <bits/stdc++.h>
using namespace std;

int main() {
	string s,o; cin >> s; bool prev = false;
	for (int i = 0; i<s.length(); i++) {
		if (s[i] == 'W' && i<s.length()-2 && s.substr(i,3) == "WUB") {
			i+=2;
			if (prev) {
				o.push_back(' ');
				prev = false;
			}
			continue;
		} 
		o.push_back(s[i]);
		prev = true;
	} 
	cout << o;
}
