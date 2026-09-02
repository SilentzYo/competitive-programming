#include <bits/stdc++.h>
using namespace std;

int diff() {
    int n; cin >> n;
    vector<int> v(n);
    for (int& i : v) {
        cin >> i;
    }    
    sort(v.begin(), v.end());
    int mdiff = INT_MAX;
    for (int i = 0; i < n-1; i++) {
        mdiff = min(mdiff, v[i+1]-v[i]);
        if(mdiff == 0) return 0;
    }
    return mdiff;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << diff() << "\n";
    }
}
