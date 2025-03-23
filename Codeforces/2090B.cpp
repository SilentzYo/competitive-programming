#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == '1') {
                bool rowValid = true;
                for (int k = 0; k < j; k++) {
                    if (grid[i][k] == '0') {
                        rowValid = false;
                        break;
                    }
                }
                bool colValid = true;
                for (int k = 0; k < i; k++) {
                    if (grid[k][j] == '0') {
                        colValid = false;
                        break;
                    }
                }
                if (!rowValid && !colValid) {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}