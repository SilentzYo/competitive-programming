#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,c=0; cin >> n;
	unordered_map<string, int> mape {{"Tetrahedron", 4}, {"Cube", 6}, {"Octahedron", 8}, {"Dodecahedron", 12}, {"Icosahedron", 20}};
	while (n--) {
		string s; cin >> s;
		c += mape[s];
	}
	cout << c;
}
