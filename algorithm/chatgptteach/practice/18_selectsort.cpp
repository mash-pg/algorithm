#include <iostream>
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
using namespace std;

void bubbleSortOptimized(vector<int>& arr){
    size_t n = arr.size();
    for(size_t i = 0; i < n -1; ++i){
        size_t minIndex = i;//最小値のインデックスを記録
        for(size_t j = i + 1; j < n; ++j){
            if(arr[j] > arr[minIndex]){
                minIndex = j;//より小さい値が見つかったら更新
            }
        }
        swap(arr[i],arr[minIndex]);//最小値と現在の先頭要素を交換
    }
}

int main(){

    srand(time(0));//乱数シードの設定
    int N;
    cout<<"配列のサイズを入力してください";
    cin >> N;

    vector<int> arr(N);

    for(size_t i = 0;i < N;++i){
        arr[i] = rand() % 100 + 1;//1～100のランダムな数
    }

    cout << "ソート前: ";
    for(size_t num : arr) cout << num << " ";
    cout << endl;

    bubbleSortOptimized(arr);
    
    cout << "ソート後: ";
    for(size_t num : arr) cout << num << " ";
    cout << endl;


    return 0;
}