// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	while (n>0) {
		int t; cin >> t;
		if (t==1) {
			cout << "HARD";
			return 0;
		}
		n--;
	}
	cout << "EASY";
}
