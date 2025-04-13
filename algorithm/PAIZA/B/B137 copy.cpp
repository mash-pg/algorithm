#include <iostream>
#include <vector>
#include <map>
using namespace std;

// 転倒数（隣接交換でソートするのに必要な最小手数）を求める
long long count_inversions(const vector<int>& arr) {
    int n = arr.size();
    //bit配列
    vector<int> bit(n + 2, 0);
    //関数がややこしいからラムダを使う
    //bit[i] は「値 i の累積出現回数」を管理する配列（1-indexed）
    auto add = [&](int i) {
        for (++i; i < bit.size(); i += i & -i) bit[i]++;
    };
    //i += i & -i により、更新対象のインデックスを辿る
    auto sum = [&](int i) {
        int s = 0;
        for (++i; i > 0; i -= i & -i) s += bit[i];
        return s;
    };

    long long inv = 0;
    //i 以下の要素がこれまでにいくつ出たかを取得
    for (int i = n - 1; i >= 0; --i) {
        inv += sum(arr[i] - 1);
        add(arr[i]);
    }
    return inv;
}

int main() {
    int N = 0;
    cin >> N;
    int c = 0;
    vector<int> input; 
    for(int i  = 0; i<N * 2;++i){
        cin >> c;
        input.push_back(c);
    }

    // 色ごとに最初と2番目の出現位置を記録
    map<int, int> count;
    vector<int> target;
    //これで「1回目の登場」と「2回目の登場」をちゃんと区別
    for (int i = 0; i < 2 * N; ++i) {
        int c = input[i];
        if (count[c] == 0) {
            // 1本目：色1～Nとして出力
            target.push_back(c);
            count[c]++;
        } else {
            // 2本目：再度 色1～Nとして出力
            target.push_back(c + N); // 異なる番号にするために +N する
        }
    }
    // 確認コード
    // cout << endl;
    // for(int i = 0; i < 2 * N;++i) cout << target[i];
    // cout << endl;
    cout << count_inversions(target) << endl;
    return 0;
}
