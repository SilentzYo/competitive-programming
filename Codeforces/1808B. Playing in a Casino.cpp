#include <bits/stdc++.h>
using namespace std;

int n,m;

long long chips(vector<int> col) {
	long long amt = 0;
	long long pSum = 0;
	sort(col.begin(),col.end());
	for (int i = 0; i < n; i++) {
		amt += (long long)(col[i])*i - pSum;
		pSum += col[i];
	}
	return amt;
}

int main() {
	int t; cin >> t;
	while (t--) {
		cin >> n >> m;
		vector<vector<int>> cards(m, vector<int>(n));
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				cin >> cards[j][i];
			}
		}

		long long total = 0;

		for (int i = 0; i < m; i++) {
			total += chips(cards[i]);
		} 
		cout << total << "\n";
	}
}