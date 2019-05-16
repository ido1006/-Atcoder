#include <bits/stdc++.h>
using namespace std;

int main() {
  char c[4][4];
  for(int i=3;i>=0;i--){
    for(int j=3;j>=0;j--){
      cin >> c[i][j];
    }
  }

  for(int i=0;i<=3;i++){
    for(int j=0;j<=3;j++){
      cout << c[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
