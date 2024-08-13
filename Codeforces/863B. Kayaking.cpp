#include <bits/stdc++.h>
using namespace std;

int checkInst(vector<int>& pairs) {
	int inst = 0;
	for (int i = 0; i < pairs.size(); i+=2) {
		inst += pairs[i+1]-pairs[i];
	}
	return inst;
}

int main() {
	int n; cin >> n; n*=2;
	vector<int> v(n);
	for (auto &it : v) cin >> it;
	sort(v.begin(),v.end());

	int minInst = INT_MAX;
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			vector<int> x = v;
			x.erase(x.begin()+j);
			x.erase(x.begin()+i);
			minInst = min(minInst,checkInst(x));
		}
	}
	cout << minInst;
}