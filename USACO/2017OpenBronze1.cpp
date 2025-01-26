#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y; cin >> x >> y;
	int totalDist = 0;
	int currentPos = x;
	int n = 1;
	int prevDist = 0;
	while (true) {
		currentPos = x + n;
		totalDist += abs(n) + prevDist;
		prevDist = abs(n);
		n *= -2;
		if ((y > x && currentPos >= y) || (y < x && currentPos <= y)) {
			totalDist -= abs(currentPos - y);
			break;
		}
	}
	cout << totalDist;
}