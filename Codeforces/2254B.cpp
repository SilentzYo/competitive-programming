#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int n; string s; cin >> n >> s;
        int c = 1, x = 0;
        for (int i = 1; i < n; i++) {
            if (s[i-1] != s[i]) c++;
            if (i == n-1) break;

            if (s[i-1] != s[i] && s[i] != s[i+1]) {
                if (s[i-1] == s[i+1]) x = 2;
                else x = max(x,1);
            }
        }
        cout << c-x << "\n";
    }
    return 0;
}
