#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), b(n), count(n + 1, 0);
    for (int& i : a) cin >> i;
    for (int& i : b) cin >> i;

    // Step 1: Calculate initial matching count
    int initialMatches = 0;
    vector<int> match(n, 0); // Whether a[i] == b[i]
    for (int i = 0; i < n; i++) {
        if (a[i] == b[i]) {
            match[i] = 1;
            initialMatches++;
        }
    }

    // count[initialMatches] += 1; // Include the initial configuration

    // Step 2: Reverse Effect Tracking
    // dp[i][j] stores the number of matches if we reverse subarray [i, j]
    for (int len = 1; len <= n; len++) {  // Iterate over all subarray lengths
        for (int i = 0; i + len - 1 < n; i++) {
            int j = i + len - 1; // Subarray end index
            int currentMatches = initialMatches;

            // Count lost matches
            for (int k = i; k <= j; k++) {
                if (match[k]) currentMatches--;
            }

            // Count gained matches after reversal
            for (int k = i; k <= j; k++) {
                if (a[j - (k - i)] == b[k]) currentMatches++;
            }

            // Update the count
            count[currentMatches]++;
        }
    }

    // Output the results
    for (int i = 0; i <= n; i++) {
        cout << count[i] << "\n";
    }

    return 0;
}
