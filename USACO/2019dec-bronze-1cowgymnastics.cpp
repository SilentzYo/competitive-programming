#include <bits/stdc++.h>
using namespace std;

int k;

bool better(int a, int b, vector<int> sesh) {
	return sesh[a] < sesh[b];
}

bool consistentBetter (int a, int b, const vector<vector<int>> rankings) {
	bool Abetter = better(a,b,rankings[0]);
	for (int i = 1; i < k; i++) {
		if (Abetter != better(a,b,rankings[i])) {
			return false;
		}
	}
	return true;
}

int main() {
	int n; cin >> k >> n;
	vector<vector<int>> rankings(k,vector<int>(n));

	for(int i = 0; i<k; i++) {
		for (int j = 0; j < n; j++) {
			int t; cin >> t;
			rankings[i][t-1] = j+1;
		}
	}
	int pairs = 0;

	for (int i = 0; i<n-1; i++) {
		for (int j = i+1; j<n; j++) {
			if (consistentBetter(i,j,rankings)) {
				pairs++;
			} 
		}
	}
	cout << pairs;
}