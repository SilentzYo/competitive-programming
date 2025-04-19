#include <bits/stdc++.h>
using namespace std;

struct point {
    int x, y, t;
};

bool isInnocent (int distancex, int distancey, int t) {
    if ((int)(sqrt(distancex*distancex + distancey*distancey)+1) <= t) {
        return false;
    } else {
        return true;
    }
}

int main() {
    int g, n; cin >> g >> n;
    vector<point> garden(n);
    for (int i = 0; i < g; i++) {
        cin >> garden[i].x >> garden[i].y >> garden[i].t;
    }


    sort(garden.begin(), garden.end(), [](const point& a, const point& b) {
        return a.t < b.t;
    }); // O(g log g)
    int innocent = 0;

    for (int i = 0; i < n; i++) {
        int x, y, t; cin >> x >> y >> t;

        bool innocence = true;

        if (t >= garden[0].t) {
            for (int j = g-1; j >= 0; j++) {
                if (j != 0 && garden[j-1].t > t) continue;
                innocence = isInnocent(abs(garden[j].x - x), abs(garden[j].y - y), t);
                if (!innocence) break;
            }
        }

        if (!innocence) continue;

        if (t <= garden[n-1].t) {
           for (int j = 0; j <= g; j++) {
                if (j != g && garden[j+1].t < t) continue;
                innocence = isInnocent(abs(garden[j].x - x), abs(garden[j].y - y), t);
                if (!innocence) break;
            }
        }

        if (innocence) innocent++;
    } // O(n*g)

    cout << innocent;
	return 0;
}