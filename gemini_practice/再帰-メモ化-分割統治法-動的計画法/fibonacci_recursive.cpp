#include <iostream>

// フィボナッチ数を計算する再帰関数
int fib(int n) {
    if (n <= 1) {
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    std::cout << "何番目のフィボナッチ数を求めますか？ ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "0以上の整数を入力してください。" << std::endl;
        return 1;
    }

    std::cout << n << "番目のフィボナッチ数は " << fib(n) << " です。" << std::endl;

    return 0;
}
