#include <bits/stdc++.h>
using namespace std;
int main() {int n,t; cin>>n; t=0;for(int i=0;i<n;i++){string s; cin>>s;if (s == "X++" || s == "++X"){t++;} else {t--;}}cout << t;}