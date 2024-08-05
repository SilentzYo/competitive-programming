#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n,odd=0,even=0; cin >> n;
		for (int i = 0; i<n; i++) {
			int a; cin >> a;
			if (i%2 != a%2) {
				if (a%2 == 0) {
					even++;
				} else {
					odd++;
				}
			}
		}
		if (even == odd) {
			cout << even << "\n";
		} else {
			cout << "-1\n";
		}
	}
}
