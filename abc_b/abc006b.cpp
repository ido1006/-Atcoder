#include <bits/stdc++.h>
#define AMARI 10007

using namespace std;

int main(){
	int n;
	cin >> n;
	int a[1000010] = {0};
	a[0]=0;
	a[1]=0;
	a[2]=1;
	for(int i=0;i<n-3;i++){
		a[i+3] =(a[i] + a[i+1] + a[i+2]) % AMARI;
	}
	cout << a[n-1] << endl;
	return 0;
}
