// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t>0) {
		int n,k,a,ops; cin >> n >> k; ops = 0;
		vector<int> v;
		while (k>0) {
			cin >> a;
			v.push_back(a);
			k--;
		}
		sort(v.begin(), v.end()); 
		v.pop_back();
		for (int i : v) {
			ops += 2*i-1;
		}
		cout << ops << "\n";
		t--;
	}
	return 0;
}
