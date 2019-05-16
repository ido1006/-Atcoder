#include <bits/stdc++.h>
using namespace std;

int main() {
  int a1,a2,b1,b2,c1,c2;
  cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
  int a=b1-a1;
  int b=c1-a1;
  int c=b2-a2;
  int d=c2-a2;

  double ans=(double)((a*d)-(b*c))/2;
  if(ans < 0) ans *= -1;
  printf("%.1f\n",ans);
  return 0;
}
