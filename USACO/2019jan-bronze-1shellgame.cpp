#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<int> v{0,1,2};
	vector<int> c(3);
	while (n--) {
		int a,b,g; cin >> a >> b >> g;
		a--; b--; g--;
		swap(v[a],v[b]);
		c[v[g]] ++;
	}
	cout << max({c[0],c[1],c[2]});
}
