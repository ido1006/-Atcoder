#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)

int main() {
  int n,m;
  cin >> n >> m;
  char a[n][n], b[m][m];
  FOR(i,0,n)FOR(j,0,n)cin >> a[i][j];
  FOR(i,0,m)FOR(j,0,m)cin >> b[i][j];

  FOR(i,0,n-m+1)FOR(j,0,n-m+1){
    int count = 0;
    FOR(k,0,m)FOR(l,0,m){
      if(a[i+k][j+l] == b[k][l])count++;
      else {
        count = 0;
        break;
      }
    }
    if(count == m*m) {
       cout << "Yes" << endl;
       return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}
