#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,k;
  cin >> n >> k;
  vector<int> r(n);
  for(int i=0;i<n;i++)cin >> r.at(i);
  sort(r.begin(),r.end());

  double c = 0;
  for(int i=n-k;i<n;i++)c = (c + r.at(i)) / 2;
  cout << setprecision(20) << c << endl;
  return 0;
}
