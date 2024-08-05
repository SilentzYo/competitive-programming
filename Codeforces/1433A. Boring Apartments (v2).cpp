#include <bits/stdc++.h>
#include <linux/limits.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		string x; cin >> x;
		int a = (x[0]-'0'-1)*10;
		a += x.size() * (x.size()+1) / 2;
		cout << a << "\n";
	}
}
