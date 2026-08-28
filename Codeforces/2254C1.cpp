#include <bits/stdc++.h>
using namespace std;

bool transformable() {
    int n; string a,b; cin >> n >> a >> b;
    if (a == b) return true;
    if (n <= 2) return false;
    int aio = 0, bio = 0, aie = 0, bie = 0;
    for (int i = 0; i < n; i++) {
        if (i%2 == 0) {
            if (a[i] == '1') {
                aie++;
            }
            if (b[i] == '1') {
                bie++;
            }
        } else {
            if (a[i] == '1') {
                aio++;
            }
            if (b[i] == '1') {
                bio++;
            }
        }
    }
    if (aie != bie || aio != bio) {
        return false;
    }
    return true;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << (transformable() ? "YES\n" : "NO\n");
    }
}
