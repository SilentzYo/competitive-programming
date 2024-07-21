// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k; string s; cin >> n >> s;
	k = 0;
	for (char c : s) {
		if (c == 'A') {
			k++;
		} else {
			k--;
		}
	}
	if (k>0) {
		cout << "Anton";
	} else if (k<0) {
		cout << "Danik";
	} else {
		cout << "Friendship";
	}
}
