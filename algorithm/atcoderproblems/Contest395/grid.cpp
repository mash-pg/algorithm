#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<vector<char>> grid(N, vector<char>(N, '.')); // 初期状態は全て '.'

    for (int i = 0; i < N; i++) {
        //条件１（ｊ＝条件）
        int j = 0;

        if (i <= j) {
            //条件２
            char color;
            if(i % 2 == 0) color = '#';
            if(i % 2 == 1) color = '.';
            
            //データ格納
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
