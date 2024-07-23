#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	unordered_map<string, int> mape;
	while (n--) {
		string s; cin >> s;
		mape[s]++;
		if (int(mape[s]) == 1) {
			cout << "OK" << endl; 
		} else {
			cout << s + to_string(mape[s]-1) << endl;
		}
	}
}
