#include <bits/stdc++.h>
using namespace std;
int main(){
	string a;
	cin >> a;
	int a_len = a.size();

	if(a.size() == 1){
		if(a[0] == 'a') cout << "-1";
		else cout << 'a';
	}
	else{
		for(int i=0;i<a_len-1;i++){
			cout << 'a';
		}
	}
	cout << endl;
	return 0;
}	
