#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    int problems = 0;
    while (n--) {
        int s = 0;
        for (int i = 0; i < 3; i++) {
            int a; cin >> a;
            s += a;
        }
        if (s>=2) {
            problems++;
        }
    }
    cout << problems;
}
