#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	int p=0;
	while (n--) {
		int m,c; cin >> m >> c;
		if (m>c) {
			p++;
		} else if (m<c) {
			p--;
		}
	}
	if (p>0) {
		cout << "Mishka";
	} else if (p<0) {
		cout << "Chris";
	} else {
		cout << "Friendship is magic!^^";
	}
}
