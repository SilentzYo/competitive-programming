#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, k; cin >> n >> k;
	int diamond[n];
	for (int& d : diamond) cin >> d;
	sort(diamond, diamond+n);

	int takeLeft[n];
	int r = 0;
	for (int l = 0; l < n; l++) {
		while (r < n && diamond[r] - diamond[l] <= k) {
			r++;
		}
		takeLeft[l] = r - l; 
	}

	int maxAfterLeft[n+1];
	maxAfterLeft[n] = 0;
	for (int i = n-1; i >= 0; i--) {
		maxAfterLeft[i] = max(maxAfterLeft[i+1], takeLeft[i]);
	}

	int maxDiamonds = 0;
	for (int l = 0; l < n; l++) {
		maxDiamonds = max(maxDiamonds, takeLeft[l] + maxAfterLeft[l + takeLeft[l]]);
	}
	cout << maxDiamonds;
	return 0;
}

// Two Pointers