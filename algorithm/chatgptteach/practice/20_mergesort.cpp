#include <iostream>
#include <vector>
using namespace std;

// マージ処理（統合）
void merge(vector<int>& arr, int left, int mid, int right) {
    //配列を半分に分ける処理
    vector<int> leftArr(arr.begin() + left,arr.begin() + mid + 1);
    vector<int> rightArr(arr.begin() + mid+1,arr.begin() + right + 1);
    int i = 0,j = 0,k = left;
    //並び替え
    while(i < leftArr.size() && j < rightArr.size()){
        if(leftArr[i] <= rightArr[j]){
            arr[k++] = leftArr[i++];
        }else{
            arr[k++] = rightArr[j++];
        }
    }

    //統合する
    while(i < leftArr.size()){
        arr[k++] = leftArr[i++];
    }
    
    while(j < rightArr.size()){
        arr[k++] = rightArr[j++];
    }
}
// マージソート（分割＆統合）
void mergeSort(vector<int>& arr, int left, int right) {
    
    if(left < right){//左から右より小さいなら続ける（配列の長さが１より大きい）
        //真ん中を見つける
        int mid = left + (right - left)/2;
        //左半分を呼び出す
        mergeSort(arr,left,mid);
        //右半分を呼び出す
        mergeSort(arr,mid+1,right);
        //左と右をマージ（並べながらくっつける）
        merge(arr,left,mid,right);
    }
}

// メイン関数
int main() {
    vector<int> arr = {10, 7, 5, 9, 1, 8,11};

    cout << "ソート前: ";
    for (int num : arr) cout << num << " ";
    cout << endl;
    int n = arr.size();
    int left = 0;
    int right = n - 1;

    mergeSort(arr, left, right);

    cout << "ソート後: ";
    for (int num : arr) cout << num << " ";
    cout << endl;

    return 0;
}
