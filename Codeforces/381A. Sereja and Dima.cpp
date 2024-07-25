#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,s=0,d=0; cin >> n;
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	for (int i = 0; i < n; i++) {
		int t;
		if (v.front() > v.back()) {
			t = v.front();
			v.erase(v.begin());
		} else {
			t = v.back();
			v.pop_back();
		}
		if (i%2==0) {
			d += t;
		} else {
			s += t;
		}
	}
	cout << d << " " << s;
}
