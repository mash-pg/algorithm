#include <iostream>
using namespace std;

// 隣り合う要素を比較して交換
// O(N²) の計算量（遅い）
// 小規模なデータに適している


// バブルソートの関数
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {  // (n-1) 回の繰り返し
        for (int j = 0; j < n - i - 1; j++) {  // 隣同士を比較
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);  // 大きい方を後ろに移動
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    for (int x : arr) cout << x << " ";  // 1 2 3 5 8
    return 0;
}

