#include <bits/stdc++.h>
using namespace std;

int main() {
	int N; cin >> N;

    array<int, 200002> a;
    for (int i = 0; i < N; i++) {
        int t; cin >> t;
        a[t]++;
    }
    
    int emptyPrev = 0;
    for (int i = 0; i <= N; i++) {
        int removei = a[i];
        
        cout << max(removei, emptyPrev) << "\n";

        if (removei == 0) emptyPrev++;
    }

    return 0;
}