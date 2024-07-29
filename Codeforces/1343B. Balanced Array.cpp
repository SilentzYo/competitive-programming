#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		if (n%4 != 0) {
			cout << "NO\n";
			continue;
		}
		string s = "YES\n";
		string o; o = "";
		for (int i = 1; i<=n/2; i++) {
			s += to_string(i*2) + " ";
			if (i!=n/2) {
				o += to_string(i*2-1) + " ";
			} else {
				o += to_string((i*2-1) + (n/2)) + "\n";
			}
		}
		cout << s + o;
	}
}
