#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t; string s; cin >> n >> t >> s;
	const char* str = s.c_str();
	while (t--){
		for (int i = 1; i < n; ++i)
        {
            if (s[i] == 'G' && s[i-1] == 'B')
            {
                s[i] = 'B';
                s[i-1] = 'G';
                ++i;
            }
        }
	}
	cout << str;
}