#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main() {
    int n; cin >> n;
    vector<int> p(n);
    for (int& i : p) cin >> i;
    sort(p.begin(), p.end());
    int median = p[n/2];
    ll cost = 0;
    for (int& i : p) {
        cost += abs(i - median);
    }
    cout << cost;
	return 0;
}