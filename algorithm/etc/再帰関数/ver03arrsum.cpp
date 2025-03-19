#include <iostream>
#include <vector>
using namespace std;

// 配列の合計を求める再帰関数（インデックスを利用）
int arrSum(const vector<int>& arr, int index) {
    if (index == arr.size()) return 0;  // ベースケース（全ての要素を見終わったら 0 を返す）
    int a =  arrSum(arr, index + 1);
    int b = arr[index];
    
    return b + a;  // 現在の要素 + 残りの合計
}

int main() {
    int N;
    cin >> N;
    vector<int> arr;
    for(int i = 1; i <= N; i++) arr.push_back(i);  // 配列を用意
    
    cout << "配列の合計: " << arrSum(arr, 0) << endl;  // インデックス 0 から開始
    return 0;
}
