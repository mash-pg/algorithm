#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<char>> grid(N, vector<char>(N, '.')); // 初期状態は全て '.'

    for (int i = 0; i < N; i++) {
        //対角線での処理（ゲームでよく使用される）
        int j = N - 1 - i; // j = N + 1 - i  - 1 (0-based index)
        if (i <= j) {
            //奇数なら黒、偶数なら白にcolorに代入する
            char color;
            if(i % 2 == 0) {
                color = '#';
            }else{
                color = '.';
            }
            //colorのデータを多次元配列に格納する処理
            for (int x = i; x <= j; x++) { // 左上から右下まで
                for (int y = i; y <= j; y++) {
                    grid[x][y] = color;
                }
            }
        }
    }

    // 結果を出力
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    return 0;
}
