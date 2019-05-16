#include <bits/stdc++.h>
using namespace std;

int main() {
  long long x;
  cin >> x;
  long long num = (x/11) * 2;
  if(x%11>0) {
    num++;
    if(x%11>6) num++;
  }
  cout << num << endl;
}
