#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,sum,ss; cin >> n; sum = ss = 0;
	vector<int> a;
	while (n > 0) {
		int t; cin >> t;
		sum += t;
		a.push_back(t);
		n--;		
	}
	sort(a.begin(),a.end(), greater<int>());
	for (int i = 0; i<int(a.size()); i++) {
		ss += a[i];
		sum -= a[i];
		if (ss > sum) {
			cout << i+1;
			return 0;
		}
	}
	cout << -1;
}
