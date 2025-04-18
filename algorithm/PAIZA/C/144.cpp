#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    if (s == t) {
        cout << "NO" << endl;  // 合言葉そのまま入力はNG
        return 0;
    }
    
    // 並び替え可能かどうかはソートして比較
    string sorted_s = s;
    string sorted_t = t;
    sort(sorted_s.begin(), sorted_s.end());
    sort(sorted_t.begin(), sorted_t.end());

    if (sorted_s == sorted_t) {
        cout << "YES" << endl;  // 並び替えた文字列ならOK
    } else {
        cout << "NO" << endl;  // 並び替え不可ならNG
    }

    return 0;
}
