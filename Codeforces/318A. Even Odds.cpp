// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,k; cin >> n >> k;
	if (k > (n+1)/2) {
		k -= (n+1)/2;
		cout << k*2;
	} else {
		cout << k*2-1;
	}
}
