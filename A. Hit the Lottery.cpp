// Source: https://usaco.guide/general/io

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,t; cin >> n; t = 0;
	t += n/100; n %= 100;
	t += n/20; n %= 20;
	t += n/10; n %= 10;
	t += n/5; n %= 5;
	t += n;
	cout << t;
}
