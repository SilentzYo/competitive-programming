#include <bits/stdc++.h>
#include <cstddef>
using namespace std;

int replacements() {
    int n; string s; cin >> n >> s;
    int odd = 2, even = 2; bool odds, evens, oddlock = false, evenlock = false;
    for (int i = 0; i < n; i++) {
        if (even > 0 && i%2 == 0) {
            if (s[i] != '?') {
                if (!evenlock) {
                    evens = (s[i] == '0');
                    evenlock = true;
                    even = 1;
                } else {
                    if (evens != (s[i] == '0')) {
                        even = 0;
                    }
                }
            }
            if (evenlock) {
                evens = !evens;
            }
        } else if (odd > 0 && i%2 == 1) {
            if (s[i] != '?') {
                if (!oddlock) {
                    odds = (s[i] == '0');
                    oddlock = true;
                    odd = 1;
                } else {
                    if (odds != (s[i] == '0')) {
                        odd = 0;
                    }
                }
            }
            if (oddlock) {
                odds = !odds;
            }
        }
    }

    return odd*even;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << replacements() << "\n";
    }
}
