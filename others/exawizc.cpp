#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,q;
  cin >> n >> q;
  char s[200010];
  for(int i=0;i<n;i++) cin >> s[i]; //s=マップの文字
  char t[200010],d[200010];
  for(int i=0;i<q;i++) cin >> t[i] >> d[i]; //t=呪文の文字 d=左右指定
  vector<int> map(200010);
  fill(map.begin(),map.end(),1); //全部1で初期化

  for(int j=0;j<q;j++){
    for(int i=0;i<n;i++){
      if(s[i]==t[j]){ //文字指定が合ってるなら動作
        if(d[j]=='L'){ //左
          if(map[i]>0){ //いるなら (いないなら処理は無い)
            if(i!=0){ //左端じゃないなら
              map[i-1] += map[i]; //左隣に総移動
              map[i]=0; //元からは消える
            }
            else{ //左端だったら
              map[i]=0; //消える
            }
          }
        }
        if(d[j]=='R'){ //右
          if(map[i]>0){ //いるなら
            if(i!=n-1){ //右端じゃないなら
              map[i+1] += map[i]; //右隣に総移動
              map[i]=0; //元からは消える
            }
            else{ //右隣だったら
              map[i]=0; //消える
            }
          }
        }
      }
    }
  }
  int count=0;
  for(int i=0;i<n;i++)count+=map[i];
  cout << count << endl;


}
