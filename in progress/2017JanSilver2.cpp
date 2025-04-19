#include <bits/stdc++.h>
using namespace std;

struct point {
    int h, p, s;
};

int main() {
	int n; cin >> n;
    vector<point> psum(n);
    psum[0].h = 0; psum[0].p = 0; psum[0].s = 0; 

    for (int i = 0; i < n; i++) {
        char move; cin >> move;
        if (i > 0) psum[i] = psum[i-1];

        if (move == 'P') psum[i].p++;
        if (move == 'S') psum[i].s++;
        if (move == 'H') psum[i].h++;
    }

    int maxWins = 0;
    for (int i = 0; i < n; i++) {
        int winsLeft = max(psum[i].h, max(psum[i].p, psum[i].s));
        int winsRight = max(psum[n-1].h-psum[i].h, max(psum[n-1].p-psum[i].p, psum[n-1].s-psum[i].s));
        maxWins = max(maxWins, winsLeft+winsRight);
    }

    cout << maxWins;
    return 0;
}
