#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
    for (int i=0; i < 5; i++){
        for (int j = 1; j < 5; j++){
            cin>>x;
            if(x==1){cout << abs(i-2)+abs(j-2);}
            j++;
        }
        i++;
    }
    return 0;
}
