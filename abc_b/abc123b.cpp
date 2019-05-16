#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> a(5);
  vector<int> b(5);
  int sum = 0;
  for(int i=0;i<5;i++){
    cin >> a.at(i);
    b.at(i) = a.at(i) % 10;
    if(b.at(i) == 0) b.at(i) = 10;
    a.at(i) += 10 - b.at(i);
    sum += a.at(i);
  }
  sort(b.begin(),b.end());
  cout << sum - 10 + b.at(0) << endl;
  return 0;


}
