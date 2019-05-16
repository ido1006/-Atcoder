#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string w;
  cin >> w;
  int w_len = w.size();
  char vow[5] = {'a','i','u','e','o'};

  for(int i=0;i<w_len;i++){
    bool flag=false;
    for(int j=0;j<5;j++){
      if(vow[j]==w[i]){
        flag=true;
      }
    }
    if(flag==false) cout<<w[i];
  }
  cout<<endl;
}
