#include <bits/stdc++.h>
using namespace std;
#define BIG 200010

int main() {
  int n,q;
  cin >> n >> q;
  char s[BIG];
  for(int i=0;i<n;i++) cin >> s[i]; //s=マップの文字
  char t[BIG],d[BIG];
  for(int i=0;i<q;i++) cin >> t[i] >> d[i];
  int map[BIG]={};
  int min[BIG]={};
  int max[BIG]={};

  for(int i=0;i<n;i++){
    for(int j=0;j<q;j++){
      if(s[i]==t[j]){
        if(d[j]=='L'){
          map[i]--;
          if(map[i] <= min[i]) min[i] = map[i];
        }
        else{
          map[i]++;
          if(map[i] >= max[i]) max[i] = map[i];
        }
      }
    }
  }

  int count = n;
  if(map[0] < min[0])

  cout << count << endl;
}
