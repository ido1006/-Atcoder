#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
  int deg,dis;
  cin >> deg >> dis;

  int wind;
  dis = (dis * 10) / 6;
  if(dis <= 24) wind = 0;
  else if (dis < 154) wind = 1;
  else if (dis < 334) wind = 2;
  else if (dis < 544) wind = 3;
  else if (dis < 794) wind = 4;
  else if (dis < 1074) wind = 5;
  else if (dis < 1384) wind = 6;
  else if (dis < 1714) wind = 7;
  else if (dis < 2074) wind = 8;
  else if (dis < 2444) wind = 9;
  else if (dis < 2844) wind = 10;
  else if (dis < 3264) wind = 11;
  else wind = 12;



  string direction;
  deg *= 10;
  if(deg <= 3375 && deg > 1125) direction = "NNE";
  else if(deg <= 5625 && deg > 3375) direction = "NE";
  else if(deg <= 7875 && deg > 5625) direction = "ENE";
  else if(deg <= 10125 && deg > 7875) direction = "E";
  else if(deg <= 12375 && deg > 10125) direction = "ESE";
  else if(deg <= 14625 && deg > 12375) direction = "SE";
  else if(deg <= 16875 && deg >= 14625) direction = "SSE";
  else if(deg <= 19125 && deg >= 16825) direction = "S";
  else if(deg <= 21375 && deg >= 19125) direction = "SSW";
  else if(deg <= 23625 && deg >= 21375) direction = "SW";
  else if(deg <= 25875 && deg >= 23625) direction = "WSW";
  else if(deg <= 28125 && deg >= 25875) direction = "W";
  else if(deg <= 30375 && deg >= 28125) direction = "WNW";
  else if(deg <= 32625 && deg >= 30375) direction = "NW";
  else if(deg <= 34875 && deg >= 32625) direction = "NNW";
  else direction = "N";


  if (wind == 0) cout << "C " << wind << endl;
  else {
    cout << direction << " " << wind << endl;
  }
  return 0;
}
