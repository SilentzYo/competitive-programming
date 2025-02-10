#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    vector<int> a(n), b(n), count(n+1);
    for(int& i : a) cin >> i;
    for(int& i : b) cin >> i;
    
    int lisrCount = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            lisrCount++;
        }
    }
    count[lisrCount] += n;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            int currentCount = lisrCount;
            
            for (int k = i; k <= j; k++) {
                if (a[k] == b[k]) {
                    currentCount--;
                }
                if (a[j-k+i] == b[k]) {
                    currentCount++;
                }
            }
            count[currentCount]++;
        }
    }

    for(int& i : count) cout << i << "\n";
    return 0;
}