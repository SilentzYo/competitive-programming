#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen ("censor.in","r",stdin);
    freopen ("censor.out","w",stdout);
	string s, t, r; cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        r += s[i];

        if (r.size () >= t.size() && r.substr(r.size()-t.size()) == t) {
            r.resize(r.size()-t.size());
        }
    }
    cout << r << endl;
    return 0;
}
