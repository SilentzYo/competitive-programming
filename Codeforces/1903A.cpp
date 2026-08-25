#include <bits/stdc++.h>
using namespace std;

bool reversable() {
    int n, k; cin >> n >> k;
    int a, b = -1; cin >> a;
    bool reverse = true;
    for (int i = 1; i < n; i++) {
        b = a; cin >> a;
        if (b>a) {
            reverse = false;
        }
    }
    return (k != 1 || reverse);
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << (reversable() ? "YES\n" : "NO\n");
    }
}
