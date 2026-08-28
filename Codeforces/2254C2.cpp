#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll operations() {
    int n; string a,b; cin >> n >> a >> b;
    if (a == b) return 0;
    if (n <= 2) return -1;
    stack<int> ae, ao, be, bo;
    for (int i = 0; i < n; i++) {
        if (i%2 == 0) {
            if (a[i] == '1') {
                ae.push(i/2);
            }
            if (b[i] == '1') {
                be.push(i/2);
            }
        } else {
            if (a[i] == '1') {
                ao.push(i/2);
            }
            if (b[i] == '1') {
                bo.push(i/2);
            }
        }
    }
    if (ae.size() != be.size() || ao.size() != bo.size()) {
        return -1;
    }
    ll ops = 0;
    while (!ae.empty()) {
        ops += abs(ae.top()-be.top());
        ae.pop(); be.pop();
    }
    while (!ao.empty()) {
        ops += abs(ao.top()-bo.top());
        ao.pop(); bo.pop();
    }

    return ops;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << operations() << "\n";
    }
}
