#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  char s[100];
  for(int i=0;i<n;i++) cin >> s[i];
  int r = 0, b = 0;
  for(int i=0;i<n;i++){
    if(s[i] == 'R') r++;
    if(s[i] == 'B') b++;
  }
  if(r > b) cout << "Yes" << endl;
  else cout << "No" << endl;
  return 0;
}
