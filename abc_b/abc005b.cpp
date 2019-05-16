#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> t(n);
  for(int i=0;i<n;i++) cin >> t.at(i);
  sort(t.begin(),t.end());
  cout << t.at(0) << endl;
  return 0;
}
