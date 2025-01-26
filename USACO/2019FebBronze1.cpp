#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int a[3]; cin >> a[0] >> a[1] >> a[2];
    sort(a, a+3);

    if(a[0]+2 == a[2]) {
        cout << "0\n0";
        return 0;
    }
    if (a[1]-a[0] == 2 || a[2]-a[1] == 2) {
        cout << "1\n";
    } else {
        cout << "2\n";
    }
    cout << max(a[1]-a[0], a[2]-a[1])-1;
    return 0;

}
