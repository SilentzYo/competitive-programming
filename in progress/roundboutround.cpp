#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int digits (int N)
{
    return N > 0 ? (int) log10 ((double) N) + 1 : 1;
}
int main() {
	int t; cin >> t;
	while (t--) {
		int N; cin >> N;
        int wrongCases = 0;
        int addFive = 0;
        int fourRepeat = 0;

        int digit = digits(N)-2;
        for (int i=0; i<digit; i++) {
            addFive += 5*pow(10,i);
            wrongCases += addFive;
        }
        for (int j=0; j<digits(N); j++) {
            fourRepeat += 4*pow(10,j);
        }
        int moreWrong;
        if (N>=5*pow(10,digits(N)-1)) {
            moreWrong = 5*pow(10,digits(N)-1)-1;
        } else {
            moreWrong = N;
        }
        moreWrong-=fourRepeat;
        if (moreWrong > 0) {
            wrongCases += moreWrong;
        }

        cout << wrongCases << endl;
	}
}