#include <bits/stdc++.h>
using namespace std;

vector<int> getFactors(int n, int m) {
    vector<int> factors;
    for(int i = 1; i * i <= n; i++) {
        if(n % i == 0) {
            if(i <= m) factors.push_back(i);
            if(n/i <= m && n/i != i) factors.push_back(n/i);
        }
    }
    return factors;
}

int main() {
	ios ::sync_with_stdio(0); cin.tie(0); cout.tie(0);


	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		vector<int> a(n); 
		for (int& i : a) cin >> i;
		sort(a.begin(), a.end());

		int left = 0, right = 0, minDiff = 100001;
		while (right < n) {
			while (right < n && a[right] - a[left] < m) {
				right++;
			}
			if (right < n) {
				minDiff = min(minDiff, a[right] - a[left]);
			}
			left++;
		}

		cout << (minDiff == 100001 ? -1 : minDiff) << "\n";
	}
	return 0;
}

// Two Pointers