#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> o(3); cin >> o[0] >> o[1] >> o[2];
	sort(o.begin(),o.end());
	cout << o[2]-o[0];
}
