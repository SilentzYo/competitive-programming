#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> order(n);
	for (int i = 0; i < n; i++) {
		cin >> order[i];
	}
	for (int j = n-2; j>=0; j--) {
		if (order[j] > order[j+1]) {
			cout << j+1;
			return 0;
		}
	}
	cout << 0;
}
