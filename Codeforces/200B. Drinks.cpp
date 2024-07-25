#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c,p; cin >> n; p=c=0;
	while (n>0) {
		int i; cin >> i;
		p += i; c++;
		n--;
	}
	cout << ((float)p/c);
	return 0;
}
