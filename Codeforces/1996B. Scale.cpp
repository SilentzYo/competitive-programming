#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n,k; cin >> n >> k;
		string outP = "";
		for (int i = 0; i<n; i++) {
			string s; cin >> s;
			if (i%k==0) {
				for (int j = 0; j<n; j+=k) {
					outP += s[j];
				}
				outP += "\n";
			}
		}
		cout << outP;
	}
}
