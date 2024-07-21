#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,d,n=4; cin >> a >> b >> c >> d;
	set<int> m;
	m.insert(a); m.insert(b); m.insert(c); m.insert(d);
	cout << 4-m.size();
} 
