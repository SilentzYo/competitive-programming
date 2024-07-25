#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,g,p; cin >> n; g = p = 0;
	while (n>0) {
		int i; cin >> i; 
		if (i!=p) {
			g++;
		}
		p=i;
		n--;
	}
	cout << g;
}
