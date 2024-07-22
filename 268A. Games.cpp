#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0; cin >> n;
	vector<int> h(n),a(n);
	for (int i = 0; i<n; i++) {
		cin >> h[i] >> a[i];
	}
	for (int x : h) {
		for (int y : a) {
			if (x==y) {
				c++;
			}
		}
	}
	cout << c;
}
