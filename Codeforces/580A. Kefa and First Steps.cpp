#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,max,cur,prev; max = cur = prev = 0; cin >> n;
	while (n--) {
		int t; cin >> t;
		if (t>=prev) {
			cur++;
			if (cur > max) {
				max = cur;
			}
		} else {
			cur = 1;
		}
		prev = t;
	}
	cout << max;
	return 0;
}
