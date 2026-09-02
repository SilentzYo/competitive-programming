#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0,i=1; cin >> n;
    while (n > 0) {
        n -= i;
        if (n >= 0) {
            c++;
        }
        i += c+1;
    }
    cout << c;
    return 0;
}