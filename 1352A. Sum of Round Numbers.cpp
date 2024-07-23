#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	string s = "";
	while (t--) {
		int n,c=0; cin >> n;
		string x = "";
		if (n/10000 != 0) {
			x += to_string(n/10000*10000) + " ";
			c++;
			n %= 10000;
		}
		if (n/1000 != 0) {
			x += to_string(n/1000*1000) + " ";
			c++;
			n %= 1000;
		}
		if (n/100 != 0) {
			x += to_string(n/100*100) + " ";
			c++;
			n %= 100;
		}
		if (n/10 != 0) {
			x += to_string(n/10*10) + " ";
			c++;
			n %= 10;
		}
		if (n != 0) {
			x += to_string(n) + " ";
			c++;
		}
		s += to_string(c) + "\n" + x + "\n";
	}
	cout << s;
}
