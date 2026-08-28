#include <bits/stdc++.h>
using namespace std;

int operations() {
    int n; cin >> n;
    map<int, int> a;
    int maxcopy = 0;
    for (int i = 0; i < n; i++) {
        int b; cin >> b;
        a[b]++;
        maxcopy = max(maxcopy, a[b]);
    }

    return n-maxcopy + (int)ceil(log2((double)n/maxcopy));
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	int t; cin >> t;
    while (t--) {
        cout << operations() << "\n";
    }
}