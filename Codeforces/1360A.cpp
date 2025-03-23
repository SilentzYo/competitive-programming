#include <bits/stdc++.h>
using namespace std;

int minArea(int a, int b) {
	return max(a*2,b)*max(a*2,b);
}
int main() {
	int t; cin >> t;
	while (t--) {
		int a,b; cin >> a >> b;
		cout << minArea(min(a,b),max(a,b)) << "\n";
	}
}
