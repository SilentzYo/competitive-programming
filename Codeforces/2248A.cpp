#include <bits/stdc++.h>
using namespace std;

string bitdelete() {
    string s; cin >> s;
    int zero = s.length()+1, one = -1;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') zero = min(zero, i);
        else one = max(one, i);
    }
    s.erase(one, 1);
    s.erase(zero, 1);
    return s;
}


int main() {
	int t; cin >> t;
    while (t--) cout << bitdelete() << "\n";
    return 0;
}
