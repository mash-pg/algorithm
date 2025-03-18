#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int left, int mid, int right) {
    //merge(0,0,1);の場合は、leftArrの場合は、0番目から0番目の値を入れる
    //なぜ＋１してるのかというと、endが含まれないからです。
    vector<int> leftArr(arr.begin() + left, arr.begin() + mid + 1);
    //merge(0,0,1);の場合は、leftArrの場合は、1番目から1番目の値を入れる
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

    cout << left;
}

void mergeSort(vector<int>& arr, int left, int right) {
    cout << "mergeSort(" << left << ", " << right << ") 呼び出し" << endl;

    if (left < right) {//左から右より小さいなら処理を続ける（左から処理を行う為）
        int mid = left + (right - left) / 2;
        
        cout << "  - 左側: mergeSort(" << left << ", " << mid << ")" << endl;
        mergeSort(arr, left, mid);
        
        cout << "  - 右側: mergeSort(" << mid + 1 << ", " << right << ")" << endl;
        mergeSort(arr, mid + 1, right);

        cout << "  - マージ処理: merge(" << left << ", " << mid << ", " << right << ")" << endl;
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
