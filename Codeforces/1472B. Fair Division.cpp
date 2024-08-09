#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n,a,b; a=b=0; cin >> n;
		while (n--) {
			int j; cin >> j;
			if (j==1) {
				a++;
			} else {
				b++;
			}
		}
		if (a%2 == 0 && (b%2 == 0 || a>0)) {
			cout << "YES\n";
		} else {
			cout << "NO\n";
		}
	}
}
