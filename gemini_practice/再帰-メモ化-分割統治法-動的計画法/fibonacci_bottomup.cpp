#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "何番目のフィボナッチ数を求めますか？ ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "0以上の整数を入力してください。" << std::endl;
        return 1;
    }

    // DPテーブル（配列）を作成
    std::vector<long long> dp(n + 1);

    // 初期値を設定
    dp[0] = 0;
    if (n >= 1) {
        dp[1] = 1;
    }

    // 小さい問題から順番に解いていく
    for (int i = 2; i <= n; ++i) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    std::cout << n << "番目のフィボナッチ数は " << dp[n] << " です。" << std::endl;

    return 0;
}
