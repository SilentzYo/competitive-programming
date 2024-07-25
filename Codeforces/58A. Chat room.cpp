#include <bits/stdc++.h>
using namespace std;

int main() {
	string s; cin >> s;
	int i = 0;
	for (char c : s) {
		if ((i==0 && c == 'h') || (i==1 && c == 'e') || ((i==2 || i == 3) && c == 'l')) {
			i++;
		} else if (i==4 && c == 'o') {
			cout << "YES";
			return 0;
		}
	}
	cout << "NO";
}
