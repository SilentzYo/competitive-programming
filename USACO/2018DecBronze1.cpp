#include <bits/stdc++.h>
using namespace std;

int main() {
	vector<int> capacity(3);
	vector<int> milk(3);
	for(int i = 0; i<3; i++) {cin >> capacity[i] >> milk [i];}
	int operations = 100;
	while (operations--) {
		int b1 = (99-operations)%3;
		int b2 = (100-operations)%3;
		int diff = min(milk[b1], capacity[b2] - milk[b2]);
		milk[b1] -= diff;
		milk[b2] += diff;
	}
	for (int mikl : milk) { cout << mikl << "\n";}
}
