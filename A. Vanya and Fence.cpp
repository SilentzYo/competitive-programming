// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,h,w; cin >> n >> h; w=0;
	while (n>0) {
		int t; cin >> t;
		if (t>h) {
			w+=2;
		} else {
			w++;
		}
		n--;
	}
	cout << w;
}
