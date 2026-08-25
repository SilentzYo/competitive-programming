#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll x () {
    ll n; cin >> n;
    ll exp = 3;
    while(true) {
        if (n%exp == 0) {
            return n/exp;
        } else {
            exp = exp*2+1;
        }
    }
    return 0;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << x() << "\n";
    }
}
