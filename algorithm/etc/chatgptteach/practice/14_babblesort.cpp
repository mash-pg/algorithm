#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>
using namespace std;

void bubbleSortOptimized(vector<int>& arr){
    int n = arr.size();
    //配列は、0から数える為n-1でやる必要がある。nのままだと5回してしまい
    //ムダに処理をしデータ０が入ってしまう。
    for (int i = 0; i < n-1 ; ++i) {
        for (int j = 0; j < n-1  - i; ++j) { // 右端は確定済みなので減らす
            if (arr[j] > arr[j + 1]) { // 隣接要素を比較
                swap(arr[j], arr[j + 1]); // 入れ替え
            }
        }
    }
}

int main(){
    int N = 0;
    vector<int> arr;
    cin >> N;
    //配列にデータを入れる
    for(int i = 0; i < N; ++i){
        int num;
        cin >> num;
        arr.push_back(num);
    }

    cout << "ソート前: ";
    for(int num : arr) cout << num << " ";
    cout << endl;

    bubbleSortOptimized(arr);
    
    cout << "ソート後: ";
    for(int num : arr) cout << num << " ";
    cout << endl;


    return 0;
}