#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n,k; cin >> n >> k;
		string out = "";
		for (int i = 0; i < k-3; i++) {
			out += "1 ";
		}
		n-=k-3;
		if (n%4 == 0) {
			out += to_string(n/2) + " " + to_string(n/4) + " " + to_string(n/4) + "\n";
		} else if (n%2 == 0) {
			out += to_string(n/2-1) + " " + to_string(n/2-1) + " 2\n";
		} else {
			out += to_string(n/2) + " " + to_string(n/2) + " 1\n";
		}
		cout << out;
	}
}
