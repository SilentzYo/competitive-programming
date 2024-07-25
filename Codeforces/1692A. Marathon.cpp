#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int a,c=0; cin >> a;
		for (int i = 0; i<3; i++) {
			int x; cin >> x;
			if (a<x) {
				c++;
			}
		}
		cout << c << endl;
	}
}
