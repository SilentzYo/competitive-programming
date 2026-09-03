#include <bits/stdc++.h>
using namespace std;

pair<int,int> teams() {
    int n, k; string s; cin >> n >> k >> s; 
    int a = 0, b = 0;
    for (int i = 0; i < 2*n; i++) {
        if (s[i] == '1') {
            if (s[(i != 2*n-1) ? (i+1) : (0)] == '1') {
                if (i%2 == 0) {
                    b++;
                } else {
                    a++;
                }
            } else {
                if (i%2 == 0) {
                    a++;
                } else {
                    b++;
                }
            }
        }
    }
    return {a,b};
}

int main() {
	int t; cin >> t;
    while (t--) {
        pair<int,int> result = teams();
        cout << result.first << " " << result.second << "\n";
    }
}
