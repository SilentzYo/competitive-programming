#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,n; cin >> s >> n;
	pair<int,int> m[1000];
	for (int i = 0; i<n; i++) {
		cin >> m[i].first >> m[i].second;
	}
	sort(m,m+n);
	for (int i = 0; i<n; i++) {
		if (s > m[i].first) {
			s += m[i].second;
		} else {
			cout << "NO"; return 0;
		}
	}
	cout << "YES";
}
