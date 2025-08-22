#include <iostream>
#include <string>
#include <vector>
#include <cctype>  // tolower, isalpha

//ctr +　dで処理が終わる。
int main() {
    std::vector<int> counts(26, 0);  // a〜z のカウント
    std::string line;

    // cは入力の読み込み（複数行対応）
    while (std::getline(std::cin, line)) {
        for (char c : line) {
            if (std::isalpha(c)) {           // アルファベットだけを対象
                c = std::tolower(c);         // 小文字に統一
                counts[c - 'a']++;           // カウント
            }
        }
    }

    // 結果の出力（a〜z）
    for (int i = 0; i < 26; ++i) {
        std::cout << static_cast<char>('a' + i) << " : " << counts[i] << std::endl;
    }

    return 0;
}
