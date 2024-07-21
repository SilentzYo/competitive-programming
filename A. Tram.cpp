// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b,max,current; cin >> n; max = current = 0;
	for (int i = 0; i<n; i++) {
		cin >> a >> b;
		current = current - a + b;
		if (current > max) {
			max = current;
		}
	}
	cout << max;
}
