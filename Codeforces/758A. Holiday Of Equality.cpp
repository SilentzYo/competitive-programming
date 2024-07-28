#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int richest = 0,sum = 0;
	vector<int> welfares(n);
	for (int i = 0; i<n; i++) {
		cin >> welfares[i];
		if (welfares[i] > richest) {
			richest = welfares[i];
		}
	}
	for (int w : welfares) {
		if (w<richest) {
			sum += richest-w;
		}
	}
	cout << sum;
}
