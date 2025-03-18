#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        int key = arr[i];  // 挿入する値
        int j = i - 1;

        // 適切な位置を見つけるために、後ろへずらす
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];  // 右にずらす
            j--;
        }
        arr[j + 1] = key;  // 挿入
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 6, 2};
    
    cout << "ソート前: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    insertionSort(arr);

    cout << "ソート後: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
