#include <bits/stdc++.h>
#include <string>
using namespace std;

typedef long long ll;

const int INF = 1000000000; //でかい数字指定の奴
const int MOD = 1000000007; //1e9+7の余り〜って奴
const ll LLINF = 1000000000000000000; //long long のクソデカ数字

#define REPC(i,a,b) for(int i=(a);i<(b);i++) //初期値設定可能のループ、Rep Custom
#define REP(i,n) REPC(i,0,n) //初期値0固定ループ
#define SAY_Y() cout << "Yes" << endl //Yesって言う奴
#define SAY_N() cout << "No" << endl //Noって言う奴
#define ANS(n) cout << (n) << endl //数字のみ回答の奴

int inputValue(){ // int a = inputValue(); って感じで書く
  int a;
  cin >> a;
  return a;
};

void inputVector(vector<int>* a, int n) { //vector<int> a; inputVector(a,n);って感じ
  REP(i,n) { //このときのnはここのループ回数を指す。配列の要素数は指定していない。
    int input;
    cin >> input;
    p -> push_back(input);
  }
};

int main() {
  int n = inputValue();
  int m = inputValue();
  int a[m],b[m];
  int c[n][n] = {0};
  REP(i,m){
    cin >> a[i] >> b[i];
    a[i]--; b[i]--;
    c[a[i]][b[i]]++;
    c[b[i]][a[i]]++;
  }
  int path = 0;



}
