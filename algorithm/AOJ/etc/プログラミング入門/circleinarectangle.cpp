#include <bits/stdc++.h>
using namespace std;

int main(void){

  int W, H, x, y, r;
  cin >> W >> H >> x >> y >> r;

  //
  if(0 <= (x-r) and (x+r) <=W and 0 <= (y-r) and (y+r) <= H){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
    
}