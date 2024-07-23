#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m,min = 99999; cin >> n >> m;
	vector<int> v(m);
	for (int i = 0; i<m; i++) {
		cin >> v[i];
	}
	sort(v.begin(),v.end());
	for (int j = 0; j<=m-n; j++) {
		if (v[j+n-1]-v[j] < min) {
			min = v[j+n-1]-v[j];
		}
	}
	cout << min;
}
