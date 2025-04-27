#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; ++i) {
        // i番目以降で最小の要素を探す
        int minIndex = i;
        for (int j = i + 1; j < n; ++j) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // i番目と最小値を交換
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 6, 2};

    selectionSort(arr);

    // 結果を表示
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
