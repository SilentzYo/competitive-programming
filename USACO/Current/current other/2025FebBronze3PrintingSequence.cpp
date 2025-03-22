#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>
#define pb push_back

ll MOD = 1e9 + 7;

void check_periodicity(vector<pll> &seq, bool &universal) {
    ll sz = seq.size();
    
    for (ll div = 2; div < sz; div++) {
        if (sz % div != 0) continue;

        ll jump = sz / div;
        bool valid = true;
        
        for (ll i = 0; i < jump; i++) {
            for (ll j = i + jump; j < sz; j += jump) {
                if (seq[i] != seq[j]) {
                    valid = false;
                    break;
                }
            }
            if (!valid) break;
        }
        
        if (valid) {
            universal = true;
            return;
        }
    }
}

void solve() {
    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (ll &x : arr) cin >> x;

    vector<pll> seq;
    ll cur = 1;

    for (ll i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            seq.pb({arr[i - 1], cur});
            cur = 0;
        }
        cur++;
    }
    seq.pb({arr[n - 1], cur});

    if (k == 1) {
        cout << (count(arr.begin(), arr.end(), arr[0]) == n ? "YES" : "NO") << "\n";
        return;
    }

    if (k == 2) {
        if (seq.size() <= 2) {
            cout << "YES\n";
            return;
        }
        if (seq.size() % 2 != 0) {
            cout << "NO\n";
            return;
        }
    }

    if (seq.size() <= 3) {
        cout << "YES\n";
        return;
    }

    bool universal = false;
    check_periodicity(seq, universal);

    // Check ignoring first element
    vector<pll> temp_seq(seq.begin() + 1, seq.end());
    check_periodicity(temp_seq, universal);

    // Check ignoring last element
    temp_seq = vector<pll>(seq.begin(), seq.end() - 1);
    check_periodicity(temp_seq, universal);

    cout << (universal ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
