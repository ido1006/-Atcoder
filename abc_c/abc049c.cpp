#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int s_len = s.size();

  for(int i=0;i<s_len;) {
    if(s[i] == 'd' && s[i+1] == 'r' && s[i+2] == 'e' && s[i+3] == 'a' && s[i+4] == 'm') {
      if(s[i+5] == 'e' && s[i+6] == 'r') {
        if(s[i+7] == 'a') {
          i += 5;
        } else {
          i += 7;
        }
      } else {
        i += 5;
      }
    } else if(s[i] == 'e' && s[i+1] == 'r' && s[i+2] == 'a' && s[i+3] == 's' && s[i+4] == 'e') {
      if(s[i+5] == 'r') {
        i += 6;
      } else {
        i += 5;
      }
    } else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}

//dreamer eraser 問題
//つまり　eraserdreamerase みたいな奴をちゃんと判定しなきゃいけない
//dreamerase とerasereraseの対応
