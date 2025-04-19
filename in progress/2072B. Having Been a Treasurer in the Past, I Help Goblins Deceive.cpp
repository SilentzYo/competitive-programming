#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll faces() {
    ll n; string s; cin >> n >> s;

    if (n<3) {
        return 0;
    }

    ll hypen = count(s.begin(), s.end(), '-'), underscore = n-hypen;

    if (hypen < 2 || underscore < 1) {
        return 0;
    }

    ll faces = ((hypen+1)/2) * (hypen/2) * underscore;
    return faces;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << faces() << "\n";
    }
    return 0;
}