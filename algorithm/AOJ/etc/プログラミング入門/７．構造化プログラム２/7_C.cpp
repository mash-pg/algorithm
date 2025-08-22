#include <iostream>
#include <vector>
using namespace std;

int main() {
    int r, c;
    cin >> r >> c;

    // (r+1) × (c+1)の2次元vectorを初期化（全部0）
    vector<vector<int>> table(r + 1, vector<int>(c + 1, 0));

    // データ入力
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> table[i][j];
        }
    }

    // 行・列・全体合計を計算
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            table[i][c] += table[i][j]; // 行合計
            table[r][j] += table[i][j]; // 列合計
            table[r][c] += table[i][j]; // 全体合計
        }
    }

    // 出力
    for (int i = 0; i <= r; i++) {
        for (int j = 0; j <= c; j++) {
            cout << table[i][j];
            if (j != c) cout << " ";
        }
        cout << endl;
    }

    return 0;
}
