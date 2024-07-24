#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t; 
	while (t--) {
		long long n,m,x; cin >> n >> m >> x;
		long long row = (x%n == 0 ? n : x%n);
		long long col = (x+n-1)/n;
		cout << ((row-1)*m+col) << endl;
	}
}
