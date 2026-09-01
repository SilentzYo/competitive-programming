#include <bits/stdc++.h>
using namespace std;

bool simplify() {
    int n; cin >> n;
    vector<int> v(n); int k = 0;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        v[i] = a;
        if (a%2 == 0) {
            k++;
        } 
    }
    if (k % 2 == 0) return true;

    sort(v.begin(),v.end());
    for (int i = 0; i < n-1; i++) {
        if (v[i] == v[i+1]-1) {
            return true;
        }
    }
    return false;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << (simplify() ? "YES\n" : "NO\n");
    }
}
