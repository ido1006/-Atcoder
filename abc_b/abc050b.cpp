#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int t[n];
  int time = 0;
  for (int i=0;i<n;i++) {
    cin >> t[i];
    time += t[i];
  }

  int m;
  cin >> m;
  int p,x;
  int juice[m];
  for (int i=0;i<m;i++) {
    cin >> p >> x;
    juice[i] = time - t[p-1] + x;
  }
  for (int i=0;i<m;i++) {
    cout << juice[i] << endl;
  }
  return 0;
}
