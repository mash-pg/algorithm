#include <iostream>
#include <vector>
#include <numeric>

void sort_and_print(std::vector<int>& data) {
    // 疑似コードの「dataの要素数-1」は、C++のインデックス（0から始まる）では
    // 最後の要素のインデックスになるため、`data.size() - 1` に対応します。
    // 配列の要素番号が1から始まるという疑似コードのルールは、
    // C++では0から始まるため、その点を調整しています。

    // 外側のforループ: i = 1 から dataの要素数-1まで1ずつ増やす
    for (int i = 0; i < data.size() - 1; ++i) {
        // 内側のforループ: j = dataの要素数 から i+1まで1ずつ減らす
        for (int j = data.size() - 1; j > i; --j) {
            // if (data[j-1] > data[j])
            if (data[j - 1] > data[j]) {
                // 要素の入れ替え
                int tmp = data[j - 1];
                data[j - 1] = data[j];
                data[j] = tmp;
            }
        }
        
        // α行: 外側のforループが1周した後の配列を出力
        std::cout << "i = " << i + 1 << "のループ後: ";
        for (int k = 0; k < data.size(); ++k) {
            std::cout << data[k] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<int> data = {5, 2, 3, 4, 1};
    
    // プログラムの実行
    sort_and_print(data);
    
    return 0;
}