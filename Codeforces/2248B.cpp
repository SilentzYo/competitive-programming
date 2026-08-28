#include <bits/stdc++.h>
using namespace std;

bool possible() {
    int n, m; cin >> n >> m;

    vector<int> a(n),b(m);
    for (int& i : a) {
        cin >> i;
    }
    for (int& i : b) {
        cin >> i;
    }
    
    if (m*2 > n) return false;
    
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i = 0;
	while (i < m && a[i] < b[i] && b[i] < a[n - m + i]) ++i;

    return (i >= m);
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << (possible() ? "YES\n" : "NO\n");
    }
}
