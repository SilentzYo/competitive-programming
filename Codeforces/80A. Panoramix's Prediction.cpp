#include <bits/stdc++.h>
using namespace std;

bool prime(int m) {
	if (m <= 1) {
		return false;
	}
	if (m <= 3) {
		return true;
	}
	if (m%2 == 0 || m%3 == 0) {
		return false;
	}
	for (int i = 5; i*i <= m; i += 6) {
		if (m % i == 0 || m % (i+2) == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int n,m; cin >> n >> m;
	for (int i = n+1; i <= m; i++) {
		if (prime(i)) {
			cout << (i==m ? "YES" : "NO");
			return 0;
		}
	}
	cout << "NO";
}
