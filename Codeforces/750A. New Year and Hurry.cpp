#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,t=240; cin >> n >> k;
	t -= k;
	for (int i = 1; i<=n; i++) {
		t -= 5*i;
		if (t<0) {
			cout << i-1;
			return 0;
		}
	}
	cout << n;
}
