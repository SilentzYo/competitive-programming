#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,m,most = 0; cin >> x >> y >> m;
	for (int i = 0; i <= m/x; i++) {
		int temp = x*i;
		while (temp+y < m) {
			temp += y;
		}
		most = max(temp,most);
	}
	cout << most;
	return 0;
}