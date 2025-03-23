#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; string s; 
    cin >> n >> s;

    unordered_set<char> chars;
    for (char c : s) {
        chars.insert(c);
    }
    int distinct = chars.size();

    int left = 0, right = 0, minRooms = n, unique = 0;
    unordered_map<char, int> subchars;

    while (right < n) {
        subchars[s[right]]++;
        if (subchars[s[right]] == 1) {
            unique++;
        }
        right++;

        while (unique == distinct) {
            minRooms = min(minRooms, right - left);

            subchars[s[left]]--;
            if (subchars[s[left]] == 0) {
                unique--;
            }
            left++;
        }
    }

    cout << minRooms;
    return 0;
}