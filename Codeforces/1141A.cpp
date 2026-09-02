#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	ll n, m; cin >> n >> m;
    if (m % n != 0) {
        cout << -1;
    } else if (m == n) {
        cout << 0;
    } else {
        m /= n;
        ll c = 0; 
        while (m != 1) {
            if (m%3 == 0) {m /= 3; c++;}
            else if (m%2 == 0) {m /= 2; c++;}
            else {
                c = -1;
                break;
            }
        }
        cout << c;
    }
    return 0;
}