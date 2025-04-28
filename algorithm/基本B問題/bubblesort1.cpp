#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    //外側ループ：4,3,2,1回繰り返す

    for (int i = n - 1; i >= 0; i--)
    {
        //隣会う
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                //swap処理での入れ替
                //swap(arr[j], arr[j + 1]);
                //手動処理での入れ替
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
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
