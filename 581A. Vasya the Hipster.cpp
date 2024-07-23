#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b; cin >> a >> b;
	string s; 
	cout << (a<b ? to_string(a) + " " + to_string((b-a)/2) : to_string(b) + " " + to_string((a-b)/2));
}
