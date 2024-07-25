#include <bits/stdc++.h>
using namespace std;

int main() {
	int x1,x2,x3,x4; cin >> x1 >> x2 >> x3 >> x4;
	int abc = max(max(x1,x2),max(x3,x4));
	cout << abc-min(x1,x2) << " " << abc-min(x3,x4) << " " << abc-min(max(x1,x2),max(x3,x4));
}
