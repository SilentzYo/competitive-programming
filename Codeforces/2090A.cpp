#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int x, y, a; cin >> x >> y >> a;
        a %= x+y;
        if (a<x) {
            cout << "NO\n";
        } else {
            cout <<"YES\n";
        }
    }
    return 0;
}
