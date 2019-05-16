#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin >> s;

  int b = 0,w = 0;
  for(int i=0;i<s.size();i++){
    if(i%2 == 0){
      if(s[i] == '0') w++;
      else b++;
    }
    else{
      if(s[i] == '0') b++;
      else w++;
    }
  }

  cout << min(b,w) << endl;
  return 0;

}
