#include <bits/stdc++.h>
using namespace std;

int main() {
	int y,w; cin >> y >> w;
	int b = max(y,w);
	if (b==1) {
		cout << "1/1";
	} else if (b == 2) {
		cout << "5/6";
	} else if (b == 3) {
		cout << "2/3";
	} else if (b == 4) {
		cout << "1/2";
	} else if (b == 5) {
		cout << "1/3";
	} else {
		cout << "1/6";
	}
}
