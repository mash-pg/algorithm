#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<string> W(N);
    for (int i = 0; i < N; i++) {
        cin >> W[i];
    }
    //「i番目と i+1 番目の単語を比べる」処理を、範囲外にならないように繰り返すため
    for (int i = 0; i + 1 < N; i++) {
        char last = W[i].back();      // i 番目の単語の末尾
        char first = W[i+1].front();  // (i+1) 番目の単語の先頭
        if (last != first) {
            // 不一致ならここで出力して終了
            cout << last << ' ' << first << endl;
            return 0;
        }
    }

    // 全て一致していたら
    cout << "Yes" << endl;
    return 0;
}
