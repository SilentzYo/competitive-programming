// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b,o = ""; cin >> a >> b; 
	for (int i = 0; i<a.length(); i++) {
		if (a[i] != b[i]) {
			o += "1";
		} else {
			o += "0";
		}
	}
	cout << o;
	return 0;
}
