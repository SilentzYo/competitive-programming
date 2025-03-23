#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t; cin >> t;
    while (t--) {
        int n; string a; cin >> n >> a;
        map<int, int> count;
        count[0] = 1;
        ll sum = 0, total = 0;

        for (int i = 0; i < n; i++) {
            sum += (a[i] - '0') - 1;

            total += count[sum];
            count[sum]++;
        }

        cout << total << "\n";
    }
    return 0;
}
