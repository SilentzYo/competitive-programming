// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t>0) {
		int a, b, c, x; cin >> a >> b >> c; x = 5;
		while (x>0) {
			if (a<=b && a<=c) {
				a++;
			} else if (b<a && b<=c) {
				b++;
			} else {
				c++;
			}
			x--;
		}
		cout << a * b * c << "\n";
		t--;
	}
}
