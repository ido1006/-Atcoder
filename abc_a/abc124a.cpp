#include <bits/stdc++.h>
using namespace std;

int main() {
  int a,b;
  cin >> a >> b;
  int sum = 0;
  if(a<b){
    int mem = a;
    a = b;
    b = mem;
  }

  sum = a;
  a--;
  if(a>b) cout << sum + a << endl;
  else cout << sum + b << endl;
  return 0;


}
