#include <bits/stdc++.h>
using namespace std;

int main(){
  int t,n,m;
  cin >> t >> n;
  vector<int> a(n);
  for(int i=0;i<n;i++) cin >> a.at(i);
  cin >> m;
  vector<int> b(m);
  for(int i=0;i<m;i++) cin >> b.at(i);

  bool flag = false;
  if(n >= m){
    flag = true;
    for(int i=0;i<n;i++){
      if(a.at(i)+t <= b.at(i)){
        flag = true;
      }
      else{
        flag = false;
        break;
      }
    }
  }
  else{
    flag = false;
  }

  if(flag == true) cout << "yes" << endl;
  if(flag == false) cout << "no" << endl;
  return 0;
}
