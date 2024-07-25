// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t; cin >> n; t=0;
	while (n>0) {
		int p,q; cin >> p >> q;
		if (q-p >= 2) {
			t++;
		}
		n--;
	}
	cout << t;
}
