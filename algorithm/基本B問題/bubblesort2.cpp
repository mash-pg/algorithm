#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size() - 1;
    //外側ループ：4,3,2,1回繰り返す

    int k = 1;

    while(k <= n){
        int x = 1;
        int l = n;
        while(l >= k){
            if(arr[l - 1] > arr[l]){
                int w = arr[l];
                arr[l] = arr[l - 1];
                arr[l - 1] = w;
                x = 0;
            }
            l = l - 1;
        }
        if(x == 1){
            k = n + 1;
        }else {
            k = k + 1;
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
