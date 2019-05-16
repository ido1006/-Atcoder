#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  char atcoder[8] = {'@','a','t','c','o','d','e','r'};
  string s;
  cin >> s;
  int s_len = s.size();

  bool flag;
  for(int i=0;i<s_len;i++){
    flag = false;
    char input;
    cin >> input;
    if(s[i] == input){
      flag = true;
    }
    else if(s[i] == '@'){
      for(int j=0;j<8;j++){
        if(input == atcoder[j]){
          flag = true;
          break;
        }
      }
    }
    else if(input == '@'){
      for(int j=0;j<8;j++){
        if(s[i] == atcoder[j]){
          flag = true;
          break;
        }
      }
    }
    if(flag == false){
      break;
    }
  }
  if(flag == true){
    cout << "You can win" << endl;
  }
  if(flag == false){
    cout << "You will lose" << endl;
  }
  return 0;
}
