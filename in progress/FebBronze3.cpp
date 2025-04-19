#include <bits/stdc++.h>
using namespace std;

array<array<int, 100>, 100> repeats, minPrints;

int findMinPrints(int first, int last) {
    if (minPrints[first][last] != 100000) {
        return minPrints[first][last];
    }
    if (first == last) {
        return 1;
    }

    if (repeats[first][last] == (last-first+1)) {
        for (int i = first; i < last; i++) {
            minPrints[first][last] = min(minPrints[first][last], 
            (findMinPrints(first, i) + findMinPrints(i+1, last)));
        }
    } else {
        minPrints[first][last] = findMinPrints(first, first+repeats[first][last]-1);
    }

    return minPrints[first][last];
}

int solvek3(int n, int k, array<int, 100> sequence) {
    for (int i = 0; i < n; i++) {
        vector<int> tempPattern;
        int patternLength = 0, vaporeon;

        for (int j = i; j < n; j++) {
            tempPattern.push_back(sequence[j]);
            patternLength++;
            vaporeon = 0;

            for (int m = i; m < n; m++) {
                if (sequence[m] != tempPattern[vaporeon]) {
                    break;
                }
                vaporeon++;
                if (vaporeon >= patternLength) {
                    if (repeats[i][m] == -1) {
                        repeats[i][m] = patternLength;
                        vaporeon = 0;
                    }
                }
            }
        }
    }
    cout << ((findMinPrints(0, n - 1) <= k) ? ("YES\n") : ("NO\n"));
    return 0;
}

string k2(int n, array<int,100> sequence) {
    bool allSame = true;
    for(int i = 1; i < n; i++) {
        if(sequence[i] != sequence[0]) {
            allSame = false;
            break;
        }
    }
    if(allSame) {
        return "YEsS\n"; 
    }

    array<int, 100> subsequence;
    subsequence[0] = sequence[0];

    bool firstInnerRepeat = true, secondInnerRepeat = false;
    int subsequencesize = 1;

    for (int j = 1; j < n; j++) {
        if (firstInnerRepeat) { // 11111 ....
            if (sequence[j] != sequence[0]) {
                firstInnerRepeat = false;
                secondInnerRepeat = true;
            } else {
                subsequence[j] = sequence[j];
                subsequencesize++;
            }
        }
        if (secondInnerRepeat) { // 111 ... 111222 ....
            if (sequence[j] == sequence[0]) {
                secondInnerRepeat = false;
                if (n % subsequencesize != 0) {
                    return "NO\n";
                }
            } else {
                subsequence[j] = sequence[j];
                subsequencesize++;
            }
        } 
        if (!secondInnerRepeat && !firstInnerRepeat) { // (111 ... 111222 ... 222)...
            if (sequence[j] != subsequence[j%subsequencesize]) {
                return "NO\n";
            }
        }
    }

    return "YES\n";
}

int main() {
    int t; cin >> t;
    while (t--) {
        int n, k; 
        cin >> n >> k;

        array<int, 100> sequence;
        for (int i = 0; i < n; i++) {
            cin >> sequence[i];
        }
        if (k == 1 || n <= k) {
            cout << "YES\n";
        } else if (k == 2) {
            cout << k2(n, sequence);
        } else {
            fill(&repeats[0][0], &repeats[0][0] + 100 * 100, -1);
            fill(&minPrints[0][0], &minPrints[0][0] + 100 * 100, 100000);
            solvek3(n,k,sequence);
        }

    }
	return 0;
}