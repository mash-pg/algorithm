#include <iostream>
#include <vector>
using namespace std;

// ヒープを調整する関数（最大ヒープを作る）
void heapify(vector<int>& arr, int n, int i) {
    int largest = i; // 一番大きいと思う場所
    int left = 2 * i + 1; // 左の子
    int right = 2 * i + 2; // 右の子

    if (left < n && arr[left] > arr[largest]) largest = left; // 左の子が大きければ更新
    if (right < n && arr[right] > arr[largest]) largest = right; // 右の子が大きければ更新

    if (largest != i) { // もし一番大きい値が親でなければ入れ替える
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // さらに下のすべり台も調整
    }
}

// ヒープソートの関数
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // ① ヒープを作る（すべり台を作る）
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // ② 一番上（最大値）を取り出して、すべり台を直す
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]); // 最大値を一番後ろへ
        heapify(arr, i, 0); // ヒープを再調整
    }
}

int main() {
    vector<int> arr = {59,59, 77, 59, 93 }; // ソートする配列

    cout << "ソート前: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    heapSort(arr);

    cout << "ソート後: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
