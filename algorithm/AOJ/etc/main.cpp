#include "/home/mash/projects/algorithm/include/template.hpp"

int main() {
    vl v = {1, 2, 3, 4, 5};
    v.pob(); // pop_back() のエイリアス

    cout << "配列の要素: ";
    for (ll x : v) cout << x << " ";
    cout << endl;

    YES; // "Yes" を出力
    NO;  // "No" を出力

    int x = 1;
    if (x == 1) YN; // "Yes" を出力

    int n = 3;
    rep(i , n) cout << n << endl;

    return 0;
}
