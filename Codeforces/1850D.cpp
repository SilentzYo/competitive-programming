#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int n, k; cin >> n >> k;
        map<int, int> m;
        for (int i = 0; i < n; i++) {
            int a; cin >> a;
            m[a]++;
        }
        int currss = 0, largestss = 0; int prev = -1;
        for (auto& pair : m) {
            if (prev != -1 && abs(pair.first-prev) <= k) {
                currss += pair.second;
            } else {
                currss = pair.second;
            }
            prev = pair.first;
            largestss = max(largestss, currss);
        }
        cout << n-largestss << "\n";
    }
}
