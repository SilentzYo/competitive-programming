#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,c;cin >> n >> k;c=0;
	int x[n];
	for (int i=0;i<n;i++){
		cin>>x[i];
	}
	for (int i=0;i<n;i++){
		if(x[i]>0 && x[i]>=x[k-1]) {
			c++;
		}else{
			break;
		}
	}
	cout << c;
	return 0;
}
