#include <bits/stdc++.h>
using namespace std;

int main() {
	freopen("shell.in", "r", stdin);
	int N; scanf("%d", &N);
	vector<int> shells{1,2,3};
	vector<int> count(3);
	while(N--) {
		int a,b,g; scanf("%d %d %d", &a, &b, &g);
		swap(shells[a], shells[b]);
		count[shells[g]]++;
	}
	freopen("shell.out", "w", stdout);
	printf("%d\n", max({count[0], count[1], count[2]}));
}
