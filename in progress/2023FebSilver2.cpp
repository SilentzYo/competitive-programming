#include <bits/stdc++.h>
using namespace std;

struct point {
    int x, y, t;
};

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

        if (t >= garden[0].t) {
            for (int j = g-1; j >= 0; j++) {
                if (j != 0 && garden[j-1].t > t) continue;
                if ((abs(garden[j].x - x) + abs(garden[j].y - y) > t)) {
                    innocent++;
                    break;
                }
            }
        }

        if (t <= garden[n-1].t) {
           for (int j = 0; j <= g; j++) {
                if (j != g && garden[j+1].t < t) continue;
                if ((abs(garden[j].x - x) + abs(garden[j].y - y) > t)) {
                    innocent++;
                    break;
                }
            }
        }
    } // O(n*g)

    cout << innocent;
	return 0;
}