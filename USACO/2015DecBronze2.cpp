#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m; cin >> n >> m;
	vector<pair<int,int>> speedlimit (n);
	for (int i = 0; i < n; i++) {
		cin >> speedlimit[i].first >> speedlimit[i].second;
	}
	int milesOver = 0;
	while (m--) {
		int distance, speed; cin >> distance >> speed;
		while (distance > 0) {
			int currentDistance = min (speedlimit[0].first, distance);
			distance -= currentDistance;
			speedlimit[0].first -= currentDistance;
			if (speed > speedlimit[0].second) {
				milesOver = max(speed - speedlimit[0].second, milesOver);
			}
			if (speedlimit[0].first == 0) {
				speedlimit.erase(speedlimit.begin());
			}
		}
	}
	cout << milesOver;
}
