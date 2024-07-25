#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,min,max,c=0; cin >> n >> min;
	max = min; n--;
	while (n--) {
		int t; cin >> t;
		if (t<min) {
			min = t;
			c++;
		}
		if (t>max) {
			max = t;
			c++;
		}
	}
	cout << c;
}
