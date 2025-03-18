#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define rep(i, n) for (int  i = 0; i < (int)(n); i++)


int main() {
  int h, w;
  cin >> h >> w;
  //2次元配列
  vector<vector<char>> v(h, vector<char>(w));
  vector<bool> hh(h, false), ww(w, false);
  rep(i, h){
    rep(j, w){
      cin >> v.at(i).at(j);
    }
  }
  //cout << v.at(0).at(1);
  rep(i, h){
    rep(j, w){
      if (v.at(i).at(j) == '#'){
        hh.at(i) = true;
        ww.at(j) = true;
      }
    }
  }
  rep(i, h){
    if (hh.at(i)){
      rep(j, w){
        if (ww.at(j)) cout << v.at(i).at(j);
      }
      cout << endl;
    }
  }
}