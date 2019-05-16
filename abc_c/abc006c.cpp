#include <bits/stdc++.h>
using namespace std;

int main(){
	int n,m;
	cin >> n >> m;
	int a,b,c; //a -> 2,b -> 3,c -> 4
	if(m%2 == 0){ //偶数だから奇数の3を弄る必要無いだよ
		b = 0;
	}
	else{ //奇数だから一度だけ3を使うだよ
		b = 1;
		n -= 1;
		m -= 3;
	}
	a = 2*n - m/2;
	c = m/2 - n;
	// a+b+c=n,2a+3b+4c=m,b=0, の連立方程式を解くだよ
	if((a>=0)&&(c>=0)) cout << a << " " << b << " " << c << endl;
	else cout << "-1 -1 -1" << endl;
	return 0;
}
