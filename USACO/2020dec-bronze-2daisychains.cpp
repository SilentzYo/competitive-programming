#include <bits/stdc++.h>
using namespace std;

bool isAvg (vector<int> subSet, int sum) {
	if (sum%subSet.size() == 0) {
		int avg = sum/subSet.size();
		for (int i : subSet) {
			if (i == avg) {
				return true;
			}
		}
	}
	return false;
}

int main() {
	int n; cin >> n;
	vector<int> f(n);
	for (auto &i : f) cin >> i;
	int amt = 0;
	for (int i = 0; i<n; i++) {
		int tsum = 0;
		vector<int> temp;
		for (int j = i; j<n; j++) {
			temp.push_back(f[j]);
			tsum += f[j];
			if (isAvg(temp,tsum)) {
				amt++;
			}
		}
	}
	cout << amt;
	return 0;
}