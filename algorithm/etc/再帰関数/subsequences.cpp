#include "/home/mash/projects/algorithm/include/template.hpp"

// 再帰関数：s の i 番目以降を見て、current に今の部分列を積み上げていく
void generateSubsequences(string s, string current, int i) {
    // ベースケース：全部見終わったら出力
    if (i == s.size()) {
        cout << current << endl;
        return;
    }
    // ① 今の文字を「含めない」場合
    generateSubsequences(s, current, i + 1);

    // ② 今の文字を「含める」場合
    generateSubsequences(s, current + s[i], i + 1);
}

int main() {
    string s;
    cin >> s;
    generateSubsequences(s, "", 0);
    return 0;
}