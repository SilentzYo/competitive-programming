#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,l,c,d,p,nl,np; cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	int dt = k * l / nl / n;
	int lt = c * d / n;
	int st = p / np / n;
	cout << min (min (dt,lt), st);
}
