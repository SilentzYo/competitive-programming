#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,co,ce,no,ne; cin >> n; co = ce = no = ne = 0;
	for (int i = 0; i<n; i++) {
		int t; cin >> t;
		if (t%2 == 0) {
			ce++;
			ne = i+1;
		} else {
			co++;
			no = i+1;
		}
		if (ce > 1 && co == 1) {
			cout << no; return 0;
		} else if (co > 1 && ce == 1) {
			cout << ne; return 0;
		}
	}
}
