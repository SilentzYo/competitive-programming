#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen ("cbarn.in","r",stdin);
    freopen ("cbarn.out","w",stdout);
	int n; cin >> n;
    vector<int> r(n);
    for(int& i : r) {cin >> i;}
    
    int distance = INT_MAX;
    for(int i = 0; i < n; i++) {
        int roomDistance = 0;
        for(int j = 0; j < n; j++) {
            if (j == i) {
                continue;
            }
            if (j > i) {
                roomDistance += (j-i)*r[j];
            } else {
                roomDistance += (n+j-i)*r[j];
            }
        }
        distance = min(distance, roomDistance);
    }
    cout << distance;
}
