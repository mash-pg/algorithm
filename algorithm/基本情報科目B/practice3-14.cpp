#include <iostream>
#include <vector>

// 10進数を8桁の2進数に変換する関数
void bitOR(unsigned char a, unsigned char b) {
    // aとbの論理和を計算
    unsigned char c = a | b;
    // ビットをチェックするためのマスク（最上位ビットに1を設定）
    unsigned char mask = 128; // 10進数で128は2進数で10000000

    // iを1から8まで1ずつ増やす
    for (int i = 0; i < 8; ++i) {
        // 論理積の結果が0かどうかを判定
        if ((c & mask) == 0) {
            // 0の場合
            std::cout << 0;
        } else {
            // 0以外の場合
            std::cout << 1;
        }
        // マスクを1ビット右にシフト
        mask = mask >> 1;
    }
    std::cout << std::endl;
}

int main() {
    // 例として01001011と10001010を渡す
    // unsigned charでは2進数を直接書けないため、10進数に変換して渡す
    // 01001011(2) = 75(10)
    // 10001010(2) = 138(10)
    bitOR(75, 138);

    return 0;
}