#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	unordered_map<int,int> v;
	for (int i = 0; i<n; i++) {
		int p; cin >> p;
		v[p] = i+1;
	}
	for (int j = 1; j<=n; j++) {
		cout << v[j];
		if (j != n) {
			cout << " ";
		}
	}
}
