//TLEよりダメだった (実行時間かかりすぎ)
//BubbleSortではなく、<vector>int のsortの使い方を勉強する必要がある

#include <bits/stdc++.h>
using namespace std;

void Sort(int*,int*,int);

int main() {
  int n,m;
  cin >> n >> m;

  int a[n],b[n];
  for(int i=0;i<n;i++) {
    cin >> a[i] >> b[i];
  }
  Sort(a,b,n);

  long long money = 0;
  int flag = 0;
  int i = 0;
  do {
    money += a[i];
    flag++;
    m--;
    if(flag != b[i]) {
    }
    else {
      i++;
      flag = 0;
    }
  }while (m > 0);

  cout << money << endl;
}


void Sort(int* a, int* b, int size) {
  for(int i=0;i<size;i++) {
    for(int j=i+1;j<size;j++) {
      if(a[i]>a[j]) {
        int num1 = a[i];
        a[i] = a[j];
        a[j] = num1;

        int num2 = b[i];
        b[i] = b[j];
        b[j] = num2;
      }
    }
  }
}
