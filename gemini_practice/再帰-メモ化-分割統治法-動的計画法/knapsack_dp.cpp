#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // 品物の数とナップサックの容量
    int N = 4; // 品物の数
    int W = 5; // ナップサックの容量

    // 品物の重さと価値 (weight, value)
    std::vector<int> weight = {2, 1, 3, 2};
    std::vector<int> value = {3, 2, 4, 2};

    // DPテーブル
    // dp[i][w] : i番目までの品物を使って、容量wのナップサックに入れることができる価値の最大値
    std::vector<std::vector<int>> dp(N + 1, std::vector<int>(W + 1, 0));

    // DPループ
    for (int i = 0; i < N; ++i) { // i番目の品物について考える
        for (int w = 0; w <= W; ++w) { // ナップサックの容量を0からWまで試す
            // i番目の品物を選ぶ場合
            if (w >= weight[i]) { // 品物が入るなら
                dp[i + 1][w] = std::max(dp[i][w - weight[i]] + value[i], dp[i][w]);
            } else { // 品物が入らないなら
                // i番目の品物を選ばない（選べない）ので、価値はi-1番目までの状態と同じ
                dp[i + 1][w] = dp[i][w];
            }
        }
    }

    // 結果の表示
    std::cout << "価値の最大値は " << dp[N][W] << " です。" << std::endl;

    return 0;
}
