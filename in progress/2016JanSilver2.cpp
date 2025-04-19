#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    array<pair<int, int>, 7> p;
    p.fill({1000001, 1000001});
    p[0].first = 0;

    int psum = 0;
    for (int i = 0; i < n; i++) {
        int t; cin >> t;
        psum += t; psum %= 7;

        p[psum-1].first = min(p[psum-1].first, i);
        p[psum-1].second = i;
    }

    int maxGroup = 0;
    for (int i = 0; i < 7; i++) {
        if(p[i].first <= n) {
            maxGroup = max(maxGroup, (p[i].second-p[i].first));
        }
    }

    cout << maxGroup;
    return 0;
}
