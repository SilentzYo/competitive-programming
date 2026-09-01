#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<pair<int,int>> m(n);
    for(int i = 0; i < n; i++) {
        int a; cin >> a;
        m[i] = {a, i+1};
    }
    int shots = n;
    string order;
    sort(m.rbegin(), m.rend());
    for (int i = 0; i < n; i++) {
        shots += m[i].first*(i);
        order += to_string(m[i].second) + ' ';
    }
    cout << shots << "\n" << order;

}
