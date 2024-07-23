#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,p=0,c=0; cin >> n;
	while (n--) {
		string t; cin >> t;
		if (t == "-1") {
			p--;
			if (p<0) {
				p=0;
				c++;
			}
		} else {
			p += stoi(t);
		}
	}
	cout << c;
}
