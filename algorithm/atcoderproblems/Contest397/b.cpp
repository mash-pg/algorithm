#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int pos = 0; // 完成形のパターン上の位置
    size_t  i = 0;   // 入力文字列sのポインタ

    while (i < s.size()) {
        char expected = (pos % 2 == 0) ? 'i' : 'o';
        if (s[i] == expected) {
            ++i; // パターンに合う → sの次の文字へ
        }
        ++pos; // 毎回パターンは進む（マッチでも挿入でも）
    }

    // posが完成した長さ → 挿入数 = pos - s.size()
    // さらに偶数長にするために、奇数なら+1
    if (pos % 2 != 0) pos++;

    cout << pos - s.size() << endl;
    return 0;
}