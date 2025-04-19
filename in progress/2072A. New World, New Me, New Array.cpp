#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int n,k,p; cin >> n >> k >> p;
        if (abs(n*p) < abs(k)) {
            cout << "-1\n"; 
            continue;
        }
        int operations = abs(k/p);
        if (k%p != 0) operations++;
        cout << operations << "\n";
    }
}
