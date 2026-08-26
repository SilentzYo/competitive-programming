#include <bits/stdc++.h>
using namespace std;

int totalDays() {
	int k; cin >> k;
    map<int, int> m;
    for (int i = 0; i < 12; i++) {
        int a; cin >> a;
        m[a]++;
    }
    int sum = 0, days = 0;
    for (auto it = m.rbegin(); it != m.rend(); ++it) {
        while (it -> second > 0 && sum < k) {
            days++; it -> second--;
            sum += it -> first;
        }

        if (sum >= k) {
            return days;
        }
    }
    return -1;    
}

int main() {
    cout << totalDays();
    return 0;
}