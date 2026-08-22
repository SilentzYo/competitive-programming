#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int a,b,c; cin >> a >> b >> c;
        int low = min(a,min(b,c)), high = max(a,max(b,c)), mid = (a+b+c)-high-low;
        cout << min(high-low, mid) << "\n";
    }
    return 0;
}
