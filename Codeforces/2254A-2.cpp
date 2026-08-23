#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        int s = min(a,min(b,c)), big = max(a,max(b,c)), m = (a+b+c)-s-big;
        cout << min(m-s, big-m) << "\n";
    }
}
