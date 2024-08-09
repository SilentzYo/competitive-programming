#include <bits/stdc++.h>
using namespace std;

int check() {
	int n,k; cin >> n >> k;
	vector<int> a(n),b(n);
	for (auto &i : a) cin >> i;
	for (auto &i : b) cin >> i;
	sort(a.begin(),a.end());
	sort(b.rbegin(),b.rend());
	int sum = 0;
	for (int i = 0; i < n; i++) {
		if (i < k) sum += max (a[i],b[i]);
		else sum += a[i];
	}
	return sum;
}

int main() {
	int t; cin >> t;
	while (t--) {
		cout << check() << "\n";
	}
}
