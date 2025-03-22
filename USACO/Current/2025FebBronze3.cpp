#include <bits/stdc++.h>
using namespace std;

string k2(int N, array<int,100> sequence) {
    int first = sequence[0], second = sequence[1];
    if (first == second) {
        for (int j = 2; j < N-1; j++) {
            if (sequence[j] != first) {
                return "NO\n";
            }
        }
        return "YES\n";
    } else {
        int third = sequence[2]; 
        if (third == second) {
            
        } else {

        }
    }
}

string k3(int N, array<int,100> sequence) {

}

int main() {
    int T; cin >> T;
    while (T--) {
        int N, K; cin >> N >> K;
        array<int, 100> sequence;
        for (int i = 0; i < N; i++) {
            cin >> sequence[i];
        }
        if (K == 1 || N <= K) {
            cout << "YES\n";
        } else if (K == 2) {
            cout << k2(N, sequence);
        } else {
            cout << k3(N, sequence);
        }
    }
	return 0;
}