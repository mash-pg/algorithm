#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>

using namespace std;

int main(){
    /*
    前：F
    後：B
    左：L
    右：R
    */
    
    int N;
    int H;
    int W;
    cin >> N >> H >> W;
    int y;
    int x;
    cin >> y >> x;
    string s;
    cin >>  s;
    //配列にデータを格納する
    vector<vector<int>> matrix(H, vector<int>(W));
    for(int i = 0; i < H;++i){
        for(int j = 0; j < W;++j){
            cin >> matrix[i][j];
        }
    }

    //最初位置を取得する
    // y -= 1;
    // x -= 1;
    y = y -1;
    x = x -1;
    //格納配列
    vector<int> arr;
    arr.push_back(matrix[y][x]);
    //前方に行く場合は
    for(int i = 0; i < N; i++){
        char move = s[i];
        if(move == 'F'){
            y -= 1;
        }
        if(move == 'B'){
            y += 1;
        }

        if(move == 'L'){
            x -= 1;
        }

        if(move == 'R'){
            x += 1;
        }

        if(y < 0 || y >= H || x < 0 || x >= W){
            break;
        }
        arr.push_back(matrix[y][x]);
    }
    for(int i = 1; i <= arr.size() - 1;i++) cout << arr[i] << endl;
    return 0;
}