#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,max,min,xi,ni; cin >> n; max = 0; min = 101;
	for (int i = 0; i<n; i++) {
		int t; cin >> t;
		if (t > max) {
			max = t; xi = i;
		}
		if (t <= min) {
			min = t; ni = i;
		}
	}
	cout << ((xi>ni) ? (xi)+(n-ni)-2 : xi+n-1-ni);
} 
