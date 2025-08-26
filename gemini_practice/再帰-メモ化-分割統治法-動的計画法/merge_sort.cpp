#include <iostream>
#include <vector>
#include <algorithm> // std::copy を使うため

// 2つのソート済み配列をマージする関数
void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // 一時的な配列にデータをコピー
    std::vector<int> L(n1), R(n2);
    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int j = 0; j < n2; j++) R[j] = arr[mid + 1 + j];

    // マージ処理
    int i = 0, j = 0, k = left;
    
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // 残った要素をコピー
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}
// 配列を表示するヘルパー関数
void printArray(const std::vector<int>& arr) {
    for (int x : arr) {
        std::cout << x << " ";
    }
    std::cout << std::endl;
}

// マージソートを実装した本体の関数
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left >= right) {
        return; // ベースケース：配列の要素が1つ以下なら何もしない
    }

    // 分割 (Divide)
    int mid = left + (right - left) / 2;

    // 統治 (Conquer)
    mergeSort(arr, left, mid);      // 左半分を再帰的にソート
    mergeSort(arr, mid + 1, right); // 右半分を再帰的にソート

    // 統合 (Combine)
    std::cout << "Merging [" << left << ".." << mid << "] and [" << mid + 1 << ".." << right << "]" << std::endl;
    std::cout << "Before merge: ";
    printArray(arr);
    merge(arr, left, mid, right);   // ソート済みの2つの半分をマージ(結合するときも処理を行う)
    std::cout << "After merge:  ";
    printArray(arr);
    std::cout << "----------------------------------------" << std::endl;
}


int main() {
    std::vector<int> arr = {12, 11, 13, 5, 6, 7, 2, 9};

    std::cout << "ソート前の配列: ";
    printArray(arr);

    mergeSort(arr, 0, arr.size() - 1);

    std::cout << "ソート後の配列: ";
    printArray(arr);

    return 0;
}
