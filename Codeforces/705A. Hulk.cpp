#include <bits/stdc++.h>
using namespace std;

int main() {
	int n; cin >> n;
	string s = "I hate ";
	for (int i = 1; i < n; i++) {
		if (i%2 != 0) {
			s += "that I love ";
		} else {
			s += "that I hate ";
		}
	}
	cout << s+"it";
}
