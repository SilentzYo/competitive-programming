#include <bits/stdc++.h>
using namespace std;
 
int main() {
    string s, t; cin >> s >> t;
    reverse(t.begin(), t.end());
    cout << (s==t ? "YES" : "NO");
    return 0;
}