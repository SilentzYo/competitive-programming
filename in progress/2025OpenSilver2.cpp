#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

	int n; ll a, b; cin >> n >> a >> b;
    unordered_map<ll,ll> cows(n);
    for (int i = 0; i < n; i++) {
        ll count, id; 
        cin >> count >> id;
        cows[id] = count;
    }

    ll sum = 0;
    for (auto& [id1, count1] : cows) {
        if (id1 > b) continue;
        if (2*id1 == a || 2*id1 == b) {
            sum += (count1)/2;
            count1 %= 2;
        } else if (id1 <= a && (cows[a-id1] != ll(0))) {
            ll change = min(cows[a-id1], count1);
            sum += change;
            count1 -= change;
            cows[a-id1] -= change;
        } else if (id1 <= b && (cows[b-id1] != ll(0))) {
            ll change = min(cows[b-id1], count1);
            sum += change;
            count1 -= change;
            cows[b-id1] -= change;
        }
    }
    cout << sum;
    return 0;
}