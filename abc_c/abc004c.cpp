#include <bits/stdc++.h>
using namespace std;

int main() {
  long int n;
  cin >> n;
  string num;
  switch ((n/5)%6) {
    case 0 : num = "123456"; break;
    case 1 : num = "234561"; break;
    case 2 : num = "345612"; break;
    case 3 : num = "456123"; break;
    case 4 : num = "561234"; break;
    case 5 : num = "612345"; break;
  }
  for(int i=0;i<(n%5);i++){
    char mem = num[i];
    num[i] = num[i+1];
    num[i+1] = mem;
  }

  cout << num << endl;
  return 0;

}
