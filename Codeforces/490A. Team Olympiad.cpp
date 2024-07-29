#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c; cin >> n;
	vector<vector<int>> v(3);
	for(int i = 1; i<=n; i++) {
		int t; cin >> t;
		v[--t].push_back(i);
	}
	if (v[0].size() == 0 || v[1].size() == 0 || v[2].size() == 0) {
		cout << 0;
		return 0;
	}
	string s = "\n";
	while(v[0].size() != 0 && v[1].size() != 0 && v[2].size() != 0) {
		c++;
		s += to_string(v[0].back()) + " " + to_string(v[1].back()) + " " + to_string(v[2].back()) + "\n";
		v[0].pop_back(); v[1].pop_back(); v[2].pop_back();
	}
	cout << c << s;
}
