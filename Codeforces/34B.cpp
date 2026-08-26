#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
    map<int, int> map;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        map[a]++;
    }

    int earned = 0;
    for (auto& pair : map) {
        if (pair.first >= 0 || m == 0) {
            break;
        }
        earned -= pair.first * min(pair.second, m);
        m -= min(pair.second, m);
    }
    cout << earned;
}
