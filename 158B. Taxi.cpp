#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c[5]={0}; cin >> n;
	while (n--) {
		int t; cin >> t;
		c[t]++;
	}
	c[0] += c[3] + c[4] + c[2]/2;
	c[1] -= c[3];
	if (c[2]%2 == 1) {
		c[0]++;
		c[1] -= 2;
	}
	if(c[1] > 0) {
		c[0] += (c[1]+3)/4;
	}
	cout << c[0];
}