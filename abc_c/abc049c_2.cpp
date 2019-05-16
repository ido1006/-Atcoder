#include <bits/stdc++.h>
#include <string>
#include <algorithm>
using namespace std;

typedef long long ll;

const int INF = 1000000000; //でかい数字指定の奴
const int MOD = 1000000007; //1e9+7の余り〜って奴
const ll LLINF = 1000000000000000000; //long long のクソデカ数字

#define REP_C(i,a,b) for(int i=(a);i<(b);i++) //初期値設定可能のループ、Rep_Custom
#define REP(i,n) REP_C(i,0,n) //初期値0固定ループ
#define REP_NI(i,n) for(int i=0;i<n;) //Rep_NoIncrement
#define SAY_Y() cout << "Yes" << endl //Yesって言う奴
#define SAY_N() cout << "No" << endl //Noって言う奴
#define ANS(n) cout << (n) << endl //数字のみ回答の奴
#define ALL(a) a.begin(),a.end()
#define PB push_back

string divide[4] = {"dream","dreamer","erase","eraser"};

int main() {
  string s;
  cin >> s;

  //後ろから解くので、全部反転
  reverse(ALL(s));
  REP(i,4) reverse(ALL(divide[i]));

  //端から切っていく
  bool can = true; //全体の真偽
  REP_NI(i,s.size()){
    bool can_2 = false; //文字列たちのどこかでdivideできるのか？
    REP(j,4){
      string d = divide[j];
      if(s.substr(i,d.size) == d){ //dでdivide可能か？ substrは多分i番目からいくつ番目までの抜き出し
        can_2 = true;
        i+=d.size(); //divideできたらiを進める
      }
    }
    if(!can_2) { //!can_2がfalse, できなかった場合
      can = false; //だめだったので、全体canをfalseに
      break; //ループ壊す
    }
  }
  if(can) SAY_Y(); //できた場合
  else SAY_N(); //できんかった場合

  return 0;
}
