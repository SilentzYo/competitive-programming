#include <bits/stdc++.h>
using namespace std;

int maxgrowth = 1002;
int t = 0, x = 1000, y = 1000;
int farm[2001][2001];

int mow(int dirx, int diry, int steps) {
    while (steps--) {
        t++;
        x += dirx;
        y += diry;
        if (farm[x][y] != -1) {
            maxgrowth = min(maxgrowth, t-farm[x][y]);
        }
        farm[x][y] = t;
    }
    return 0;
}

int main() {
    freopen ("mowing.in","r",stdin);
    freopen ("mowing.out","w",stdout);
	int n; cin >> n;
    memset(farm, -1, sizeof(farm)); 
    farm[x][y] = 0;
    while (n--) {
        char direction; int steps; cin >> direction >> steps;
        int dirx = 0, diry = 0;
        if (direction == 'N') {
            dirx = 1;
        } else if (direction == 'S') {
            dirx = -1;
        } else if (direction == 'E') {
            diry = 1;
        } else {
            diry = -1;
        }
        mow(dirx, diry, steps);
    }
    cout << ((maxgrowth == 1002) ? (-1) : (maxgrowth));
}
