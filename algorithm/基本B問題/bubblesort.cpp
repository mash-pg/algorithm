#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    // 外側ループ：何回も繰り返す
    for (int i = 0; i < n - 1; ++i) {
        // 内側ループ：隣同士を比較する
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 6, 2};

    bubbleSort(arr);

    // ソート結果を出力
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
