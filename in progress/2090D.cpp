#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    if (n == 2) {
        cout << "2 1\n";
        return;
    }
    
    cout << "2 1 3";
    for (int i = 4; i <= n; i++) {
        cout << " " << i;
    }
    cout << "\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}