#include <iostream>
#include <vector>
using namespace std;

class SegmentTree {
    public:
        int size;
        vector<long long> tree;

        // 初期化：最小の2のべき乗サイズに拡張
        void init(int n) {
            size = 1;
            while (size < n) size *= 2;
            tree.assign(2 * size, 0);  // 初期値0
        }

        // 配列 a で木を構築
        void build(const vector<long long>& a) {
            //（8 = 5,9 = 3,10 = 7,11 = 9,12 = 6,13 = 4,14 = 1,15 = 2）
            for (int i = 0; i < a.size(); ++i) {
                tree[size + i] = a[i];
            }
            //添え字（7,6,5,4,3,2,1） 
            for (int i = size - 1; i >= 1; --i) {
                tree[i] = tree[2 * i] + tree[2 * i + 1];
            }
        }

        // 値の更新：A[i] を x に変更
        void update(int i, long long x) {
            i += size;
            tree[i] = x;
            while (i > 1) {
                i /= 2;
                tree[i] = tree[2 * i] + tree[2 * i + 1];
            }
        }

        // 区間 [l, r) の和を求める
        long long query(int l, int r, int node, int node_l, int node_r) {
            if (r <= node_l || node_r <= l) return 0;  // 範囲外
            if (l <= node_l && node_r <= r) return tree[node];  // 完全に内側
            int mid = (node_l + node_r) / 2;
            long long left = query(l, r, 2 * node, node_l, mid);
            long long right = query(l, r, 2 * node + 1, mid, node_r);
            return left + right;
        }

        // 外部から呼ぶとき用
        long long query(int l, int r) {
            return query(l, r, 1, 0, size);
        }
};

int main() {
    int n = 8;
    vector<long long> a = {5, 3, 7, 9, 6, 4, 1, 2};

    SegmentTree seg;
    seg.init(n);
    seg.build(a);

    // クエリ：区間 [2, 6) の合計 → 7+9+6+4 = 26
    cout << "sum[2, 6) = " << seg.query(2, 6) << endl;

    // 更新：a[3] = 10（9 → 10）
    seg.update(3, 10);

    // 再クエリ：区間 [2, 6) の合計 → 7+10+6+4 = 27
    cout << "sum[2, 6) = " << seg.query(2, 6) << endl;

    return 0;
}
