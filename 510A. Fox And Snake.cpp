#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m; cin >> n >> m;
	for (int i = 0; i < n; i++) {
		string s = "";
		if (i%2 != 0) {
			if (i%4 == 3) {
				s += "#";
			}
			for (int j = 1; j < m; j++) {
				s += ".";
			}
			if (i%4 == 1) {
				s += "#";
			}
		} else {
			for (int j = 0; j < m; j++) {
				s += "#";
			} 
		}
		cout << s << endl;
	}
}
