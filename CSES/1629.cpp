#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    for (pair<int,int> & p : a) cin >> p.second >> p.first;
    sort(a.begin(), a.end());

    int eventEnd = 0, events = 0;
    for (const pair<int,int> & p : a) {
        if (p.second >= eventEnd) {
            events++;
            eventEnd = p.first;
        }
    }

    cout << events;
	return 0;
}