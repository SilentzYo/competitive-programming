#include <bits/stdc++.h>
using namespace std;

int num() {
	int k,c=1,num=1; cin >> k;
	while (c<k) {
		num++;
		if (num%3 != 0 && num%10 != 3) {
			c++;
		}
	}
	return num;
}

int main() {
	int t; cin >> t;
	while (t--) {
		cout << num() << "\n";
	}
}
