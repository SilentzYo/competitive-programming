#include <bits/stdc++.h>
using namespace std;

int main() {
	string points; cin >> points;
	int pairs = 0;

	pair<int,int> appearances[26];
	for (auto& p : appearances) {
        p = {-1, -1};
    }

	for(int i = 0; i < 52; i++) {
		int ascii = (int)(points[i])-65;
		if (appearances[ascii].first == -1) {
			appearances[ascii].first = i;
		} else {
			appearances[ascii].second = i;
		}
	}
	
	for(int j = 0; j < 26; j++) {
		if (appearances[j].first+1 != appearances[j].second) {
			int letters[26] = {0};
			for(int k = appearances[j].first+1; k < appearances[j].second; k++) {
				letters[(int)points[k]-65]++;
			}
			for(int i : letters) {
				pairs += i%2;
			}
		}
	}

	cout << pairs/2;
	return 0;
}
