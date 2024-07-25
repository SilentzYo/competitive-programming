#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,a; cin >> x;
	if (x%5 != 0) {
		cout << x/5+1;
	} else {
		cout << x/5;
	}
}
