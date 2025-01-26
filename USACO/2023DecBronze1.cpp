#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<long long> cows(n);
	for (long long& cow : cows) {cin >> cow;}

	for (int i = 0; i < m; i++) {
		long long candy,consumed = 0; cin >> candy;
		for (long long& cow : cows) {
			if (cow > consumed) {
				long long change = min(cow-consumed, candy-consumed);
				cow += change;
				consumed += change;
			}
			if (consumed == candy) {break;}
		}
	}

	for (long long cow : cows) {cout << cow << "\n";}
}
