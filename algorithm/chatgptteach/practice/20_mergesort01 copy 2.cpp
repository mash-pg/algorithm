#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid + 1, arr.begin() + right + 1);
    
    int i = 0, j = 0, k = left;
    while (i < leftArr.size() && j < rightArr.size()) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k++] = leftArr[i++];
        } else {
            arr[k++] = rightArr[j++];
        }
    }
    while (i < leftArr.size()) arr[k++] = leftArr[i++];
    while (j < rightArr.size()) arr[k++] = rightArr[j++];
}

void mergeSort(vector<int>& arr, int left, int right) {
    cout << "mergeSort(" << left << ", " << right << ") 呼び出し" << endl;

    if (left < right) {
        int mid = left + (right - left) / 2;        
        mergeSort(arr, left, mid);        
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
    cout << "mergeSort(" << left << ", " << right << ") 終了" << endl;
}

int main() {
    vector<int> arr = {44, 79, 22, 55, 73};

    cout << "ソート前：" << endl;
    for (int num : arr) cout << num << " ";
    cout << endl;

    mergeSort(arr, 0, arr.size() - 1);

    cout << "ソート後：" << endl;
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
