#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main() {
	string s; cin >> s;
	long long sum = 0; long long x = s.length()*4-1;
	unordered_map<char, int> mape {{'>',8}, {'<',9}, {'+',10}, {'-', 11}, {'.', 12}, {',',13}, {'[', 14}, {']', 15}};
	for (char c : s) {
		sum *= 16; 
		sum += mape.at(c);
		sum %= 1000003;
	}
	cout << sum;
}