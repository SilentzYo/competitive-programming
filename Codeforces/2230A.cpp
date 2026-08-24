#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        long long n,a,b; cin >> n >> a >> b;
        if (b < 3*a) {
            cout << n/3*b + (n%3 != 0 && ((n%3%2 == 0 && b < 2*a) || (n%3%1 == 0 && b < a)) ? b : n%3*a) << "\n";
        } else {
            cout << a*n << "\n";
        }
    }
}
