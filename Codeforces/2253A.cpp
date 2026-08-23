#include <bits/stdc++.h>
using namespace std;

bool prime(int n) {
    if (n == 2) {
        return true;
    } else if (n % 2 == 0) {
        return false;
    } else {
        for (int i = 3; i * i <= n; i += 2) {
            if (n % i == 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
	int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        cout << (prime(n+1) ? "YES\n" : "NO\n");
    }
	return 0;
}
