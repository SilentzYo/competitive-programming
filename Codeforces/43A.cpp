#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
    string a = "", b = ""; int ac = 0;
    for (int i = 0; i < n; i++) {
        string s; cin >> s;
        if (a == "") {
            a=s;
        } else if (s != a && b == "") {
            b=s;
        }
        if(s == a) {
            ac++;
        }
    }

    if (ac*2 > n) {
        cout << a;
    } else {
        cout << b;
    }   
}