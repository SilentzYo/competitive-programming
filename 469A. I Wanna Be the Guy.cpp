#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	set<int> s;
	for (int i = 0; i<2; i++) {
		int p; cin >> p;
		for (int j = 0; j<p; j++) {
			int t; cin >> t;
			s.insert(t);
		}
	}
	cout << ((s.size() == n) ? "I become the guy." : "Oh, my keyboard!");
}
