#include <bits/stdc++.h>
#include <linux/limits.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string x; cin >> x;
		int a = (int(x[0]-'0')-1)*10;
		if (x.length() == 1) {
			a += 1;
		} else if (x.length() == 2) {
			a += 3;
		} else if (x.length() == 3) {
			a += 6;
		} else {
			a += 10;
		}
		cout << a << "\n";
	}
}
