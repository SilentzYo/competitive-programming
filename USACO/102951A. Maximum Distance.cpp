#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> x(n),y(n);
	for (auto &i : x) cin >> i;
	for (auto &i : y) cin >> i;
	int max = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j<n; j++) {
			int difx = abs(x[i]-x[j]);
			int dify = abs(y[i]-y[j]);
			int square = difx*difx + dify*dify;
			if (square > max) {
				max = square;
			}
		}
	}
	cout << max;
}
