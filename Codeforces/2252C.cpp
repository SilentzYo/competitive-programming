#include <bits/stdc++.h>
using namespace std;

int pieces() {
    int n, m; cin >> n >> m;
    int mp = m;
    vector<int> stabindex(n);
    for(int& i : stabindex) {
        cin >> i;
    }

    vector<map<int, int>> df(n);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> df[i][j];
        }
    }

    vector<int> best;
    for(int i = n-1; i >= 0; i--) {
        for (int j = 0; j < m; j++) {
            best.push_back(df[i][j]);
        }

        sort(best.rbegin(), best.rend());
        best.resize(m);

        int csi = stabindex[i];
        int cp = 0;
        for (int k = 0; k < m; k++) {
            stabindex[i] -= best[k];
            cp++;
            if (stabindex[i] <= 0) {
                mp = min(cp,mp);
                break;
            }
        }
    }
    return mp;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << pieces() << "\n";
    }
}
