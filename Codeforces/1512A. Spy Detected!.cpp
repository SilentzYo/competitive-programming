#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		vector<int> a(n);
		for (int i = 0; i<n; i++) {
			cin >> a[i];
		}
		vector<int> v = a;
		sort(v.begin(),v.end());
		int t = v[1];
		for (int i = 0; i<n; i++) {
			if (a[i]!=t) {
				cout << i+1 << endl;
				break;
			}
		}
	}
}
