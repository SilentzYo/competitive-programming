#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        if (n%2 == 0) {
            int maxk = INT_MAX, mink = 0;
            for (int i = 0; i < n; i++) {
                int w; cin >> w;
                if (i%2 == 0) {
                    maxk = min(w, maxk);
                } else {
                    mink = max(w, mink);
                }
            }
            if (mink + 1 >= maxk) {
                    cout << "NO\n";
            } else {
                cout << "YES\n";
            }  
        } else {
            for (int i = 0; i < n; i++) {int w; cin >> w;}
            cout << "NO\n";
        }
    }
}
