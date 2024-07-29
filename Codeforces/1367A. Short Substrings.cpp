#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string b,x=""; cin >> b;
		x += b[0];
		for (int i = 1; i<b.length(); i += 2) {
			x += b[i];
		}
		cout << x << "\n";
	}
}
