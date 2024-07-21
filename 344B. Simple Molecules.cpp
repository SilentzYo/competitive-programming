// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c; cin >> a >> b >> c;
	if ((a+b+c)%2 != 0) {
		cout << "Impossible";
		return 0;
	}
	int x,y,z; x = (a+b-c)/2; y = (b+c-a)/2; z = (a+c-b)/2;
	if (x<0 || y < 0 || z < 0) {
		cout << "Impossible";
		return 0;
	}
	cout << x << " " << y << " " << z;
}
