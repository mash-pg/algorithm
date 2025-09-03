#include <iostream>
#include <vector>
#include <algorithm>

// 10進数を8桁の2進数に変換する関数
std::vector<int> decToBin(int n) {
    // 8個の未定義の値を持つ配列を初期化
    std::vector<int> bin(8);
    int j = n;

    // kを8から1まで1ずつ減らす
    for (int k = 7; k >= 0; --k) {
        // b: 商をjに再代入
        j = j / 2;
        // a: 余りをbin配列に格納
        bin[k] = j % 2;

    }

    return bin;
}

int main() {
    int n = 5; // 例としてn=5を使用
    std::vector<int> binary = decToBin(n);

    std::cout << n << "を2進数に変換すると: ";
    for (int i = 0; i < binary.size(); ++i) {
        std::cout << binary[i];
    }
    std::cout << std::endl;

    return 0;
}