#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll packages() {
    ll n,k; cin >> n >> k;
    ll i = 1, div = LLONG_MAX;
    while (i <= ll(sqrt(n)) && i <= k) {
        if (n%i == 0) {
            div = min(div,min(((n/i <= k) ? i : LLONG_MAX), n/i));
        }
        i++;
    }
    return ((div != LLONG_MAX) ? div : -1);
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << packages() << "\n";
    }
}
