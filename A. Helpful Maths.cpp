// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	string s; cin >> s;
	vector<int> v;

	for (int i = 0; i<int(s.length()); i+=2) {
		v.push_back(s[i] - '0');
	}

	sort(v.begin(),v.end());

	string o = "";
	for (int j=0; j<int(v.size());j++) {
		o += to_string(v[j]);
		if (j != v.size()-1) {
			o += "+";
		}
	}

	cout << o;
	return 0;
}
