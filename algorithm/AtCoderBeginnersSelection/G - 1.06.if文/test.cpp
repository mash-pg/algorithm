#include <iostream>
#include <vector>
#include <atcoder/all>

using namespace std;
using namespace atcoder;

// 区間の最小値を求める関数
int op(int a, int b) { return min(a, b); }
// 単位元（最小値を求めるので無限大を設定）
int e() { return 1e9; }

int main() {
    int n = 5;
    vector<int> data = {5, 3, 7, 9, 1};

    // 修正：vector を直接渡す
    segtree<int, op, e> seg(data);

    cout << "区間 [1, 3] の最小値: " << seg.prod(1, 4) << endl;  // [1, 3] の最小値
    seg.set(2, 2);  // 3番目の値を 2 に更新
    cout << "更新後の区間 [1, 3] の最小値: " << seg.prod(1, 4) << endl;

    return 0;
}
