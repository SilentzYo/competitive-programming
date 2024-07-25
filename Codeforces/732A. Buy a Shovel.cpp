#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,r; cin >> k >> r;
	k %= 10;
	int c=1,x=k;
	while (true) {
		if (x==r || x==0) {
			cout << c;
			return 0;
		}
		x = (x+k)%10;
		c++;
	}
}