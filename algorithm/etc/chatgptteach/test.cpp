#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // unordered_map（辞書型）の作成
    std::unordered_map<std::string, int> myMap;

    // データの追加
    myMap["apple"] = 150;
    myMap["banana"] = 100;
    myMap["orange"] = 120;

    // 検索したいキー
    std::string key = "banana";

    // キー検索
    auto itr = myMap.find(key);
    if (itr != myMap.end()) {
        // キーが見つかった場合
        std::cout << "キー [" << key << "] の値は " << itr->second << " です。" << std::endl;
    } else {
        // キーが見つからなかった場合
        std::cout << "キー [" << key << "] は見つかりません。" << std::endl;
    }

    return 0;
}
