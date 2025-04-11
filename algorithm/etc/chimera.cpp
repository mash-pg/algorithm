//#include "/home/mash/projects/algorithm/include/template.hpp"
#include "/home/mash/project/algorithm/algorithm/include/template.hpp"


// セグメント木
struct SegmentTree {
    int size;
    vector<int> data;

    SegmentTree(int n) {
        size = 1;
        while (size < n) size <<= 1;
        data.assign(2 * size, 0);
    }

    // 値の更新（最大値を保持）
    void update(int i, int value) {
        i += size;
        data[i] = max(data[i], value);
        while (i > 1) {
            i >>= 1;
            data[i] = max(data[2 * i], data[2 * i + 1]);
        }
    }

    // 区間最大値 [l, r)
    int query(int l, int r) {
        int res = 0;
        l += size;
        r += size;
        while (l < r) {
            if (l & 1) res = max(res, data[l++]);
            if (r & 1) res = max(res, data[--r]);
            l >>= 1;
            r >>= 1;
        }
        return res;
    }
};

int main() {
    int N;
    cin >> N;
    vector<int> A(N);
    for (int& x : A) cin >> x;

    const int MAX = N + 2;

    // --- LIS ---
    vector<int> lis(N);
    SegmentTree seg1(MAX);
    for (int i = 0; i < N; ++i) {
        int val = A[i];
        int best = seg1.query(0, val);  // A[i]未満の最大
        lis[i] = best + 1;
        seg1.update(val, lis[i]);
    }

    // --- LDS (右から見る) ---
    vector<int> lds(N);
    SegmentTree seg2(MAX);
    for (int i = N - 1; i >= 0; --i) {
        int val = A[i];
        int best = seg2.query(0, val);  // A[i]未満の最大
        lds[i] = best + 1;
        seg2.update(val, lds[i]);
    }

    // --- Bitonic 最大長を求める ---
    int ans = 0;
    for (int i = 0; i < N; ++i) {
        ans = max(ans, lis[i] + lds[i] - 1);
    }
    cout << ans << endl;
    return 0;
}
