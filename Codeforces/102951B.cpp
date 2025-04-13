#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x; cin >> n >> x;
    vector<int> a(n);
    for (int& i : a) cin >> i;
    sort(a.begin(), a.end());

    int sum = 0, problems = 0;
    while (problems < n && sum+a[problems] <= x) {
        sum += a[problems];
        problems++;
    }
    cout << problems;
	return 0;
}