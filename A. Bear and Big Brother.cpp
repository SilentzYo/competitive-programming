// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,i; cin >> a >> b; i = 0;
	while (true) {
		a*=3; b*=2; i++;
		if (a > b) {
			cout << i;
			break;
		}
	}
	return 0;
}
