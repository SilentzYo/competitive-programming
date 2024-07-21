#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t>0) {
		int n,m,k; cin >> n >> m >> k; 
		string s = "";
		while (n>k) {
			s += to_string(n--) + " "; 
		}
		s += to_string(k);
		for (int i = m+1; i < k; i++) {
			s += " " + to_string(i);
		} 
		for (int j = 1; j <= m; j++) {
			s += " " + to_string(j);
		}
		cout << s << "\n";
		t--;
	}
}
