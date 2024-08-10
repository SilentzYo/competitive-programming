#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,md=0; cin >> n >> k;
	vector<int> ds(n);
	for (auto &t : ds) cin >> t;
	for (int i = 0; i < n; i++) {
		int td = 0;
		for (int j = 0; j<n; j++) {
			if (ds[j] <= ds[i]+k && ds[j] >= ds[i]) {
				td++;
			}
		}
		md = max(td,md);
	}
	cout << md;
	return 0;
}

/* previous attempt checked whether the number 
   was in the range of i-k <= x <= i+k
   but in the case where both edges were met,
   i-k and i+k have a difference of 2k,
   which is greater than k, and thus would over-count */