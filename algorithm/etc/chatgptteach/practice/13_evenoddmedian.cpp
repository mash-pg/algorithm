#include <iostream>
#include <vector>
#include <algorithm> // sort を使用
#include <cmath> 
using namespace std;

// 中央値（メディアン）を求める関数
double calculateMedian(const vector<int>& numbers) {
    if (numbers.empty()) return -1; // データがない場合はエラー値を返す
    int size = numbers.size();
    if (size % 2 == 1) {
        return numbers[size / 2]; // 奇数個 → 真ん中の値
    } else {
        return (numbers[size / 2 - 1] + numbers[size / 2]) / 2.0; // 偶数個 → 中央2つの平均
    }
}

double calculateratio(double total, double count){
    return round((count / total) * 100);

}
//偶数・奇数の積を求める関数（オーバーフロー対策で double を使う）
long long calculateProduct(const vector<int>& numbers){
    if(numbers.empty()) return 0;
    long long product = 1;
    const long long LIMIT = 1e18; // オーバーフローの閾値
    for(int num : numbers){
        if (abs(product) > LIMIT / abs(num)) {
            cout << "積: オーバーフロー" << endl;
            return 0;
        }
        product *= num;
    }
    return product;
}

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
    //昇順ソートを実行
    sort(evens.begin(), evens.end());
    sort(odds.begin(), odds.end());
    // 偶数のリスト（昇順 & 降順）
    double medianevens;
    double mediaodds;
    if (!evens.empty()) {
     
        cout << "偶数の中央値（メディアン）は: " << calculateMedian(evens) << endl;

        cout << "偶数のリスト（昇順）: ";      
        for (auto num : evens) cout << num << " ";
        cout << endl;

        cout << "偶数のリスト（降順）: ";
        sort(evens.begin(), evens.end(), greater<int>()); // 降順ソート
        for (auto num : evens) cout << num << " ";
        cout << endl;
    } else {
        cout << "データなし" << endl;
    }

    // 奇数のリスト（昇順 & 降順）
    cout << "奇数のリスト（昇順）: ";
    if (!odds.empty()) {
        cout << "奇数の中央値（メディアン）は: " << calculateMedian(odds) << endl;

        for (auto num : odds) cout << num << " ";
        cout << endl;

        cout << "奇数のリスト（降順）: ";
        sort(odds.begin(), odds.end(), greater<int>()); // 降順ソート
        for (auto num : odds) cout << num << " ";
        cout << endl;
    } else {
        cout << "データなし" << endl;
    }

    // 偶数の最大値・最小値
    if (!evens.empty()) {
        cout << "偶数の最大値: " << *max_element(evens.begin(), evens.end()) << endl;
        cout << "偶数の最小値: " << *min_element(evens.begin(), evens.end()) << endl;
    } else {
        cout << "偶数の最大値: データなし" << endl;
        cout << "偶数の最小値: データなし" << endl;
    }

    // 奇数の最大値・最小値
    if (!odds.empty()) {
        cout << "奇数の最大値: " << *max_element(odds.begin(), odds.end()) << endl;
        cout << "奇数の最小値: " << *min_element(odds.begin(), odds.end()) << endl;
    } else {
        cout << "奇数の最大値: データなし" << endl;
        cout << "奇数の最小値: データなし" << endl;
    }

    // 合計と個数の出力
    cout << "偶数の合計: " << evensum << endl;
    cout << "偶数の個数: " << evens.size() << endl;
    cout << "偶数の割合: " << calculateratio(N,evens.size()) <<"%" << endl;
    cout << "偶数の積: " << calculateProduct(evens) << endl;
    cout << "奇数の合計: " << oddsum << endl;
    cout << "奇数の個数: " << odds.size() << endl;
    cout << "奇数の割合: " << calculateratio(N,odds.size())  << "%" << endl;
    cout << "奇数の積: " << calculateProduct(odds) << endl;

    return 0;
}
