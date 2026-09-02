#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n; cin >> n;
    vector<ll> v(n), p(n);
    for(int i = 0; i < n; i++) {
        ll a; cin >> a;
        v[i] = a;
        p[i] = a + ((i != 0) ? p[i-1] : 0); 
    }
    ll total = p[n-1];
    if (total % 3 != 0) {
        cout << 0;
        return 0;
    }
    ll ways = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (i != n-1 && p[i]*3 == total*2) {
            ways += cnt;
        }
        if (p[i]*3 == total) {
            cnt++;
        } 
    }
    cout << ways;
    return 0;
}