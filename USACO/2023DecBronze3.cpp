#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
	int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<ll> heights(n), growth(n), taller(n); 
        for(ll& height : heights) {cin >> height;}
        for(ll& grow : growth) {cin >> grow;}
        for(ll& tall : taller) {cin >> tall;}
        
        vector<int> p(n);
        for(int i = 0; i < n; i++) {
            p[taller[i]] = i;
        }

        ll days = 0;
        for(int i = n-1; i >= 1; i--) {
            int small = p[i], big = p[i-1];
            ll heightDiff = (heights[small]+growth[small]*days)-(heights[big]+growth[big]*days);
            if (heightDiff >= 0) {
                ll growthDiff = growth[big]-growth[small];
                if (growthDiff <= 0) {
                    days = -1; break;
                }
                days += (heightDiff+growthDiff)/(growthDiff);
            }
        }
        for (int i = n-1; i >= 1; i--) {
            if ((heights[p[i]]+growth[p[i]]*days) >= (heights[p[i-1]]+growth[p[i-1]]*days)) {
                days = -1; break;
            }
        }
        cout << days << "\n";
    }
    return 0;
}