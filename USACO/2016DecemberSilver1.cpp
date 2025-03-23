#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, q; cin >> n >> q;
	int a[n];
	for (int& i : a) cin >> i;
	sort(a, a+n);

	while (q--) {
		int ql, qr; cin >> ql >> qr;
		cout << upper_bound(a, a+n, qr) - lower_bound(a, a+n, ql) << "\n";
	}
	return 0;
}

// Binary Search on a Sorted Array