#include <bits/stdc++.h>
using namespace std;

int main() {
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string t = "";
		vector<int> a(101,0);
		for (int i = 0; i<n; i++) {
			int x; cin >> x;
			a[x]++;
		}
		for (int i = 0; i<=100; i++) {
			if (!a[i]) {
				break;
			}
			t += to_string(i) + " ";
			a[i]--;
		}
		for (int i = 0; i<=100;i++) {
			for (int j = 0; j<a[i]; j++) {
				t += to_string(i) + " ";
			}
		}
		cout << t << endl;;

	}
}
