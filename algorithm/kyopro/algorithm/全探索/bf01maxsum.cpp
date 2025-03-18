#include <iostream>
using namespace std;

//ループを使う全探索（例：最大のペアの和）
//配列のすべてのペアを試す
// sizeof関数は、バイト単位で取得する方法
int main(){
    int arr[] = {1,5,9,3};
    //バイトの数で配列の中の個数を取得する
    int n = sizeof(arr)/sizeof(arr[0]);
     int maxSum = 0;
     for(int i = 0; i < n; i++){
        for(int j = i + 1 ;  j < n; j++){
            maxSum  = max(maxSum,arr[i]+ arr[j]);
        }
     }
     cout << "配列全体のバイト数" << sizeof(arr);
     cout << "最大のペアの和" << maxSum << endl;
     return 0;

    
}