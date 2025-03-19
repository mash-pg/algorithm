#include <iostream>
#include <vector>
#include <algorithm> // sort を使用
using namespace std;

int main() {
    int N = 0;
    int evensum = 0, oddsum = 0;
    vector<int> evens, odds;

    cout << "配列の要素数を入力してください: ";
    while (!(cin >> N) || N <= 0) {
        cout << "無効な入力です。正の整数を入力してください: ";
        cin.clear();
        cin.ignore(10000, '\n');
    }

    cout << N << " 個の整数を入力してください: ";
    for (int i = 0; i < N; ++i) {
        int num;
        while (!(cin >> num)) {
            cout << "無効な入力が検出されました。整数を入力してください: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        if (num % 2 == 0) {
            evens.push_back(num);
            evensum += num;
        } else {
            odds.push_back(num);
            oddsum += num;
        }
    }

    // 偶数のリスト（昇順 & 降順）
    cout << "偶数のリスト（昇順）: ";
    if (!evens.empty()) {
        sort(evens.begin(), evens.end());
        for (auto num : evens) cout << num << " ";
        cout << endl;

        cout << "偶数のリスト（降順）: ";
        sort(evens.rbegin(), evens.rend()); // 降順ソート
        for (auto num : evens) cout << num << " ";
        cout << endl;
    } else {
        cout << "データなし" << endl;
    }

    // 奇数のリスト（昇順 & 降順）
    cout << "奇数のリスト（昇順）: ";
    if (!odds.empty()) {
        sort(odds.begin(), odds.end());
        for (auto num : odds) cout << num << " ";
        cout << endl;

        cout << "奇数のリスト（降順）: ";
        sort(odds.rbegin(), odds.rend()); // 降順ソート
        for (auto num : odds) cout << num << " ";
        cout << endl;
    } else {
        cout << "データなし" << endl;
    }

    // 偶数の最大値・最小値（ソート済みなので簡略化）
    if (!evens.empty()) {
        cout << "偶数の最大値: " << evens.front() << endl;
        cout << "偶数の最小値: " << evens.back() << endl;
    } else {
        cout << "偶数の最大値: データなし" << endl;
        cout << "偶数の最小値: データなし" << endl;
    }

    // 奇数の最大値・最小値（ソート済みなので簡略化）
    if (!odds.empty()) {
        cout << "奇数の最大値: " << odds.front() << endl;
        cout << "奇数の最小値: " << odds.back() << endl;
    } else {
        cout << "奇数の最大値: データなし" << endl;
        cout << "奇数の最小値: データなし" << endl;
    }

    // 合計と個数の出力
    cout << "偶数の合計: " << evensum << endl;
    cout << "偶数の個数: " << evens.size() << endl;
    cout << "奇数の合計: " << oddsum << endl;
    cout << "奇数の個数: " << odds.size() << endl;

    return 0;
}
