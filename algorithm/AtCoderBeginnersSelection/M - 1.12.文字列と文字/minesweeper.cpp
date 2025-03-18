#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;
  string board[50];
  int dx[8] = {1, 1, 0, -1,-1,-1, 0, 1};
  int dy[8] = {0, 1, 1,  1, 0,-1,-1,-1};

  //縦から順に１列のデータを配列を格納する。
  //（例）"....." , ".#.#." など
  for(int i = 0; i < h; ++i) 
  {
    cin >> board[i];
    
  }

  //縦一列のデータを検索
  for (int i = 0; i < h; ++i){
    //横一列のデータを検索
    for (int j = 0; j < w; ++j){
      //'#'があれば
      if(board[i][j] == '#') continue;

      int num =0;
      for(int d = 0; d < 8; ++d){
         int ni = i + dy[d];
         int nj = j + dx[d];

        if(ni < 0 or h <= ni) continue;
        if(nj < 0 or w <= nj) continue; 
        if(board[ni][nj] == '#') num++;
      }

    board[i][j] = char(num + '0');
    
    }
  }
  for (int i = 0; i < h; ++i) cout << board[i] << endl;
  
  return 0;
}