#include <bits/stdc++.h>
using namespace std;

int newline() {
    int n, q; string a,b; cin >> n >> q >> a >> b;
    vector<vector<int>> ao(n+1, vector<int>(26,0)), bo(n+1, vector<int>(26,0));
    for (int i = 1; i <= n; i++) {
        ao[i] = ao[i-1];
        bo[i] = bo[i-1];
        ao[i][a[i-1] - 'a']++;
        bo[i][b[i-1] - 'a']++;
    }

    while (q--) {
        int l,r; cin >> l >> r;
        int diff = 0;
        for (int i = 0; i < 26; i++) {
            diff += abs((ao[r][i] - ao[l-1][i]) - (bo[r][i] - bo[l-1][i]));
        }
        cout << diff/2 << "\n";
    }
    return 0;
}

int main() {
	int t; cin >> t;
    while (t--) {
        newline();
    }
}
