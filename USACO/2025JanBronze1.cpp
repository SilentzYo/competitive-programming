#include <bits/stdc++.h>
using namespace std;

int checkPrev(int i, int j, int shiftRight, int shiftDown, vector<string> photo) {
    if (j < shiftRight || i < shiftDown || photo[i-shiftDown][j-shiftRight] == 'W') {
        return -1;
    } else {
        return 1;
    }
}

int minStars () {
    int dimensions,shiftRight,shiftDown; cin >> dimensions >> shiftRight >> shiftDown;
    vector<string> photo(dimensions); 
    for (string& s : photo) cin >> s;
    vector<vector<int>> real(dimensions, vector<int>(dimensions, 0));
    int stars = 0;
    for (int i = dimensions-1; i >= 0; i--) {
        for (int j = dimensions-1; j >= 0; j--) {

            if (photo[i][j] == 'B') {
                if (checkPrev(i, j, shiftRight, shiftDown, photo) == -1) {
                    return -1; // WB
                } else {
                    real[i-shiftDown][j-shiftRight] = 1;
                    stars++; // GB
                    if (real[i][j] != 1) {
                        real[i][j] = 1; stars++; // BB
                    }
                }
            } else if (photo[i][j] == 'G') {
                if (real[i][j] == 1) {
                    continue; // GB GG
                } else if (checkPrev(i, j, shiftRight, shiftDown, photo) == -1) {
                    real[i][j] = 1; stars++; // WG 
                } else {
                    real[i-shiftDown][j-shiftRight] = 1; stars++; // GG BG
                }
            }
        }
    }
    return stars;
}

int main() {
	int t; cin >> t;
    while (t--) {
        cout << minStars() << "\n";
    }
    return 0;
}