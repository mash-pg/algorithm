#include <iostream>
#include <vector>
using namespace std;

void insertionSort(vector<int>& arr) {
    int N = arr.size();
    //4回繰り返す n=5の時4回処理が行われる
    for (int i = 1; i < N; ++i) { 
        //i = 1,2,3,4の時処理が行われる(j = 0,1,2,3で処理が行われる)
        for (int j = i - 1; j >= 0; --j) { 
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]); // ワークに入れ替え
            } else {
                break; // Exit（ループを抜ける）
            }
        }
    }
}

int main() {
    vector<int> arr = {5, 3, 8, 6, 2};
    insertionSort(arr);

    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
