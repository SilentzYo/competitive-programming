#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,p=0; cin >> n >> k;
	while (n--) {
		int t; cin >> t;
		if (t<=5-k) {
			 p++;
		}
	}
	cout << p/3;
}
