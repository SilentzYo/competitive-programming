#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        int n; cin >> n;
        vector<int> b(n);
        for (int& i : b) {
            cin >> i;
        }
        int left = 0, right = n-1;
        string s;
        while (right >= left) {
            if (right == left) {
                s += to_string(b[right]);
                right--;
            } else {
                s += to_string(b[left++]) + ' ' + to_string(b[right--]) + ' ';
            }
        }
        cout << s << "\n";
    }
}
