#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen ("sleepy.in","r",stdin);
    freopen ("sleepy.out","w",stdout);
	int n; cin >> n;
    vector<int> cow(n);
    for(int& i : cow) {cin >> i; i--;}
    int sorts = n-1;
    for (int i = n-1; i > 0; i--) {
        if(cow[i-1] < cow[i]) {
            sorts = i;
        } else {
            break;
        }
    }

    cout << sorts;
    return 0;
}
