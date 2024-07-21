#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n; cin >> n;
	int x = 0;
	while (n>0) {
		if (int(n%10) == 7 || int(n%10) == 4) {
			x++;
		}
		n /= 10;
	}
	if (x==0) {
		cout << "NO"; return 0;
	}
	while (x>0) {
		if (int(x%10) != 7 && int(x%10) != 4) {
			cout << "NO"; return 0;
		}
		x /= 10;
	}
	cout << "YES";
	return 0;
}
