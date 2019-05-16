#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int N,Q;
  cin >> N >> Q;
  string S;
  cin >> S;

  vector<int> l(Q);
  vector<int> r(Q);
  for(int i=0;i<Q;i++){
     cin >> l.at(i) >> r.at(i);
   }

  vector<int> ans(Q,0);
  for(int i=0;i<Q;i++){
    for(int j=0;j<(r.at(i)-l.at(i));j++){
      if(S.compare(l.at(i)+j-1, 2, "AC") == 0) ans.at(i)++;
    }
  }

  for(int i=0;i<Q;i++) cout << ans.at(i) << endl;
  return 0;
}
