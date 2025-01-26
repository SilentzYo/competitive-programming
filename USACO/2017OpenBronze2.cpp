#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m; 
	vector<string> cows(2*n);
	for (string& cow : cows) {cin >> cow;}
	int positions = 0;
	for (int i = 0; i < m; i++) {
		bool a = false, c = false, g = false, t = false, repeat = false;
		for (int j = 0; j < 2*n; j++) {
			char base = char(cows[j][i]);
			if (j < n) {
				if (base == 'A') {
					a = true;
				} else if (base == 'C') {
					c = true;
				} else if (base == 'G') {
					g = true;
				} else if (base == 'T') {
					t = true;
				}
			} else {
				if ((base == 'A' && a == true) || (base == 'C' && c == true) || (base == 'G' && g == true) || (base == 'T' && t == true)) {
					repeat = true;
					break;
				}
			}
		}
		if (!repeat) {
			positions++;
		}
	}
	cout << positions;
	return 0;
}
