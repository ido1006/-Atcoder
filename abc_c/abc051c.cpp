#include <bits/stdc++.h>
using namespace std;

int main () {
  int sx, sy, gx, gy;
  cin >> sx >> sy >> gx >> gy;

  for(int i=0;i<gy-sy;i++) { //(0,0)を原点として、差で表す
    cout << "U";
  }
  for(int i=0;i<gx-sx;i++) {
    cout << "R";
  }
  for(int i=0;i<gy-sy;i++) {
    cout << "D";
  }
  for(int i=0;i<gx-sx;i++) {
    cout << "L";
  } //これで1往復　UUURRRRDDDLLLL(原点から左に1ずれた状態)

  cout << "L"; //左に1ズレる

  for(int i=0;i<(gy-sy)+1;i++) { //(0,1)から差+1の位置へ
    cout << "U";
  }
  for(int i=0;i<(gx-sx)+1;i++) { //目的地の上につく
    cout << "R";
  }

  cout << "DR"; //目的地に入り、右に1ずれる

  for(int i=0;i<(gy-sy)+1;i++) {
    cout << "D";
  }
  for(int i=0;i<(gx-sx)+1;i++) { //目的地の一個下に入る
    cout << "L";
  }

  cout << "U" << endl; //とーちゃく
  return 0;
}
