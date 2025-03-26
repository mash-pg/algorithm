#include "/home/mash/projects/algorithm/include/template.hpp"

int main() {
    std::string x;

    while (std::cin >> x) {
        if (x == "0") break; // 入力の終わり
        int sum = 0;
        for (char ch : x) {
            sum += ch - '0'; // 文字を整数に変換し加算
        }
        std::cout << sum << std::endl;
    }
    cout << endl;

    return 0;
}
