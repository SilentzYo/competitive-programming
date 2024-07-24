#include <bits/stdc++.h>
using namespace std;

long long gcdsum(long long num) {
	long long temp = num, sum = 0;
	while (temp > 0) {
		sum += temp%10;
		temp /= 10;
	}
	return gcd(num,sum);
}

int main() {
	int t; cin >> t;
	while (t--) {
		long long n; cin >> n;
		if (gcdsum(n) > 1) {
			cout << n << endl;
		} else if (gcdsum(n+1) > 1) {
			cout << n+1 << endl;
		} else {
			cout << n+2 << endl;
		}
	}
}
