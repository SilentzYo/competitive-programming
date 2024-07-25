#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
    while (t--) {
        string s; cin >> s;
        int a = s.find("11");
        int b = s.rfind("00");
        cout << (a != -1 && b != -1 && a<b? "NO" : "YES") << endl;
    }
}
