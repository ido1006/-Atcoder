#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string S;
  cin >> S;
  int S_len = S.size();
  int cnt=0;
  int max=0;
  for(int i=0;i<S_len;i++){
    if((S[i] == 'A') || (S[i] == 'C') || (S[i] == 'G') || (S[i] == 'T')){
      cnt++;
    }
    else{
      if(cnt > max){
        max=cnt;
        cnt=0;
      }
      else{
        cnt=0;
      }
    }
  }
  if(cnt > max){
    max=cnt;
  }
  cout << max << endl;
  return 0;
}
