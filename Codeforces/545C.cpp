#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t; cin >> n;
    int fell = 0, blocked = INT_MIN;
    while (n--) {
        int x,h; cin >> x >> h;
        if (x-h > blocked) {
            blocked = x;
            fell++;
        } else if (x > blocked) {
            blocked = x + h;
            fell++;
        } else if (x-h > t) {
            blocked = x;
        } else {
            blocked = x + h;
        }
        t = x;
    }
    cout << fell; 
    return 0;
}