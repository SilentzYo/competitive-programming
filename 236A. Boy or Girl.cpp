#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	set<char> c(s.begin(),s.end());
	cout << (c.size()%2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!");
	return 0;
}