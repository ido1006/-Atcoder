#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  string s;
  cin >> s;
  int s_len = s.size();

  int length = 0;
  for(int i=0;i<s_len;i++) {
    if(s[i] == 'A') {
      length -= i-1;
      break;
    }
  }

  for(int i=s_len-1;i>=0;i--) {
    if(s[i] == 'Z') {
      length += i;
      break;
    }
  }
  cout << length << endl;
}
