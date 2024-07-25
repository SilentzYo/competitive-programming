#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v;
	while (n--) {
		int  j; cin >> j; v.push_back(j);
	}
	sort(v.begin(),v.end());
	for (int x : v) {
		cout << x << " ";
	}
	return 0;
}
