#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,p,c; cin >> n >> k >> p; c=0;
	vector<int> v(n);
	for (int i = 0; i<n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i<n-1; i++) {
		for (int j = i+1; j<n; j++) {
			long long ai = v[i]; long long aj = v[j];
			long long x = ai*aj*((ai*ai*ai + aj*aj*aj)%p)%p;
			if (x!=k) {
				c++;
			}
		}
	}
	cout << c;
	return 0;
}
