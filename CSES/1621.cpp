#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,dist=0; cin >> n;
	vector<int> y(n);
	for (auto &i : y) cin >> i;
	sort(y.begin(),y.end()); 
	for (int i = 0; i < n; i++) {
		if (i == 0 || y[i] != y[i-1]) {
			dist++;
		}
	}
	cout << dist;
}
