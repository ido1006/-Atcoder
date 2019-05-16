#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;

  if(m > 70000) {
    cout << 89 << endl;
  }
  else if (m >= 35000) {
    cout << 80 + (((m / 1000) - 30) / 5) << endl;
  }
  else if (m >= 6000 && m <= 30000) {
    cout << 50 + (m / 1000) << endl;
  }
  else if (m >= 100 && m <= 5000) {
    if ((m/100) > 10) {
      cout << m/100 << endl;
    }
    else {
      cout << 0 << m/100 << endl;
    }
  }
  else {
    cout << "00" << endl;
  }
}
