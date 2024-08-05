#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n,max=0,min=INT_MAX; cin >> n;
		while (n--) {
			int x; cin >> x;
			if (x > max) {
				max = x;
			}
			if (x < min) {
				min = x;
			}
		}
		cout << max-min << "\n";
	}
}
