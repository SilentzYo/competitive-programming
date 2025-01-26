#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	vector<tuple<string, int, int>> highway(n);
	pair<int, int> currentEnd = {0, 1001}, currentBegin = {0, 1001};

	for (int i = 0; i < n; i++) {
		string type; int lower, upper; cin >> type >> lower >> upper;
		highway[i] = {type, lower, upper};

		if (type == "on") {
			currentEnd.first += lower;
			currentEnd.second += upper;
		} else if (type == "off") {
			currentEnd.first = max (currentEnd.first - upper, 0);
			currentEnd.second = max (currentEnd.second - lower, 0);
		} else {
			currentEnd = {max(lower, currentEnd.first), min(upper, currentEnd.second)};
		}
	}

	for (int i = n-1; i >= 0; i--) {
		string type = get<0>(highway[i]); int lower = get<1>(highway[i]), upper = get<2>(highway[i]);
		if (type == "off") {
			currentBegin.first += lower;
			currentBegin.second += upper;
		} else if (type == "on") {
			currentBegin.first = max (currentBegin.first - upper, 0);
			currentBegin.second = max (currentBegin.second - lower, 0);
		} else {
			currentBegin = {max(lower, currentBegin.first), min(upper, currentBegin.second)};
		}
	}
	cout << currentBegin.first << " " << currentBegin.second << "\n" << currentEnd.first << " " << currentEnd.second;
	return 0;
}
