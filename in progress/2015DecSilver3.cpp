#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int n, q; cin >> n >> q;
    vector<array<ll,3>> p(n, {0,0,0});
    for (int i = 0; i < n; i++) {
        int t; cin >> t; t--;
        if (i>0) {
            p[i] = p[i-1];
        }
        p[i][t]++;
    }

    while (q--) {
        int a,b; cin >> a >> b; a--; b--;
        int h = p[b][0], g = p[b][1], j = p[b][2];
        if (a != 0) {
            h -= p[a-1][0];
            g -= p[a-1][1];
            j -= p[a-1][2];
        }
        cout << h << " " << g << " " << j << "\n";
    }

    return 0;
}
