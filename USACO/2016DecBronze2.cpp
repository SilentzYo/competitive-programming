#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen ("blocks.in","r",stdin);
    freopen ("blocks.out","w",stdout);
	int n; cin >> n;
    int alphabet[26] = {0};
    while (n--) {
        string a,b; cin >> a >> b;
        int aa[26] = {0},ba[26] = {0};
        for(char c : a) {
            aa[(int)c-97]++;
        }
        for(char c : b) {
            ba[(int)c-97]++;
        }
        for(int i = 0; i < 26; i++) {
            alphabet[i] += max(aa[i], ba[i]);
        }
    }
    for(int i : alphabet) {
        cout << i << "\n";
    }
}