#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	string a,b,c; cin >> a >> b >> c;
	unordered_map<char, int> m,n;
	for (char c : a) {
		m[c]++;	
	}
	for (char d : b) {
		m[d]++;
	}
	for (char e : c) {
		n[e]++;
	}
	cout << (m==n ? "YES" : "NO");
}
