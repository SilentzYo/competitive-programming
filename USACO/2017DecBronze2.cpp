#include <bits/stdc++.h>
using namespace std;

int unshuffle(vector<int>& shuffle, vector<int>& cowid, int n) {
	vector<int> shuffeled(n);
	int i = 0;
	for (int& move : shuffle) {
		shuffeled[i] = cowid[move];
		i++;
	}
	cowid = shuffeled;
	return 0;
}

int main() {
	int n; cin >> n;
	vector<int> shuffle(n);
	for(int& i : shuffle) {cin >> i; i--;}
	vector<int> cowid(n);
	for(int& j : cowid) {cin >> j;}
	for (int i = 0; i < 3; i++) {
		unshuffle(shuffle, cowid, n);
	}
	for (int k : cowid) {cout << k << "\n";}
	return 0;
}
