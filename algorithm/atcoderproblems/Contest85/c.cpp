#include "/home/mash/project/algorithm/algorithm/include/template.hpp"
// 🔍 方針（全探索）
// お札の枚数が最大でも2000枚なので、3重ループを使っても間に合います。
// 例えば、以下のようにループを回せばOK：
// x：10000円札の枚数（0〜N）
// y：5000円札の枚数（0〜N）
// 残りの z は N - x - y
// そのときの合計金額が Y になるかを調べる。

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll N = 0;//枚数
    ll Y = 0;//金額
    cin >> N >> Y;
    for (ll x = 0; x <= N; ++x) {
        for (ll y = 0; y + x <= N; ++y) {
            ll z = N - x - y;
            ll total = 10000 * x + 5000 * y + 1000 * z;
            if (total == Y) {
                cout << x << " " << y << " " << z << endl;
                return 0;
            }
        }
    }
    cout << "-1 -1 -1" << endl;
    return 0;
}