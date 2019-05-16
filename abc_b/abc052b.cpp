#include <bits/stdc++.h>
#include <string>
using namespace std;

int main () {
  int n;
  string s;
  cin >> n >> s;

  int num=0,max=0;
  for(int i=0;i<n;i++) {
    if(s[i] == 'I') {
      num++;
      if(max < num) max=num;
    }
    else num--;
  }
  cout << max << endl;
  return 0;
}
