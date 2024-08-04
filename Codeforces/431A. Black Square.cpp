#include <bits/stdc++.h>
using namespace std;

int main() {
	int a1,a2,a3,a4,sum=0; string s; cin >> a1 >> a2 >> a3 >> a4 >> s;
	for (char c : s) {
		if (int(c)-48 == 1) {
			sum += a1;
		} else if (int(c)-48 == 2) {
			sum += a2;
		} else if (int(c)-48 == 3) {
			sum += a3;
		} else {
			sum += a4;
		}
	}
	cout << sum;
	return 0;
}
