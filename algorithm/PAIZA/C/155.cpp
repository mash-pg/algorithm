#include <iostream>
#include <string>
using namespace std;

int main() {
    string S;
    int N;

    // 検索キーワードを読み込む
    getline(cin, S);

    // 行数を読み込む
    cin >> N;
    //お前を見つけるの時間がかかったぞ
    cin.ignore(); // 改行を消す（重要）

    for (int i = 0; i < N; ++i) {
        string line;
        getline(cin, line);

        if (line.find(S) != string::npos) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
