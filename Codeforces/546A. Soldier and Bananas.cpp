#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,n,w,t; cin >> k >> n >> w;
	for (int i = 1; i<=w; i++) {
		t = t+(i*k);
	} 
	if (n<t) {
		cout << t-n;
	} else {
		cout << 0;
	}
}
