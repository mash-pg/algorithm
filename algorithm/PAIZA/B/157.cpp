#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;
    vector<vector<int>> shop(N, vector<int>(K));

    // 入力
    for (int i = 0; i < N; ++i){
        for (int j = 0; j < K; ++j){
            cin >> shop[i][j];
        }
    }

    //重複処理を避けるためにsetを使用
    set<int> target_rows;

    // 各列について処理
    for (int col = 0; col < K; ++col) {
        int min_val = shop[0][col];
        for (int row = 1; row < N; ++row) {
            min_val = min(min_val, shop[row][col]);
        }

        // その最小値を持つ行番号を追加
        for (int row = 0; row < N; ++row) {
            if (shop[row][col] == min_val) {
                target_rows.insert(row); 
            }
        }
    }

    // 出力
    cout << target_rows.size() << endl;
    return 0;
}
