#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  vector<int> a(N);
  vector<int> b(N);
  for (int i=0;i<N;i++) cin >> b.at(i);

  for(int i=0;i<N;i++){
    if((i+1)>=b.at(i)){
      a.insert(a.begin()+(b.at(i)-1),b.at(i));
    }
    else{
      cout << "-1" << endl;
      return 0;
    }
  }

  for(int i=0;i<N;i++){
    cout << a.at(i) << endl;
  }

  return 0;

}
