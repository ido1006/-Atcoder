#include <bits/stdc++.h>
using namespace std;

int main () {
  int n,m,c;
  cin >> n >> m >> c;
  int a[n][m],b[m];

  for(int j=0;j<m;j++) {
    cin >> b[j];
  }

  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      cin >> a[i][j];
    }
  }

  int sum[n] = {0};
  for(int i=0;i<n;i++) {
    for(int j=0;j<m;j++) {
      sum[i] += a[i][j] * b[j];
    }
  }

  int count = 0;
  for (int i=0;i<n;i++) {
    if(sum[i] + c > 0) count++;
  }

  cout << count << endl;
  return 0;
}
