#include <iostream>
#include <vector>

// メモ化用の配列 (-1で未計算を表す)
std::vector<long long> memo;

// フィボナッチ数を計算するメモ化再帰関数
long long fib(int n) {
    // ベースケース
    if (n <= 1) {
        return n;
    }

    // すでに計算済みであれば、メモの値を返す
    if (memo[n] != -1) {
        return memo[n];
    }

    // 計算結果をメモしてから返す
    return memo[n] = fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    std::cout << "何番目のフィボナッチ数を求めますか？ ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "0以上の整数を入力してください。" << std::endl;
        return 1;
    }

    // メモ化用配列を-1で初期化
    memo.assign(n + 1, -1);

    std::cout << n << "番目のフィボナッチ数は " << fib(n) << " です。" << std::endl;

    return 0;
}
