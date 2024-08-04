#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int x,y,n; cin >> x >> y >> n;
		if (x > n) {
			cout << "0\n";
			continue;
		}
		cout << y+((n-y)/x)*x << "\n";
	}
}
