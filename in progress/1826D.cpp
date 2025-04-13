#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n; string a; cin >> n >> a;
    map<int, int> count;
    count[0] = 1;
    ll sum = 0, maxvalue = 0;

    for (int i = 0; i < n; i++) {
        sum += (a[i] - '0') - 1;

        maxvalue = max(maxvalue, (ll)count[sum]);
        count[sum]++;
    }

    cout << maxvalue << "\n";
}

int main() {
	int t; cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}