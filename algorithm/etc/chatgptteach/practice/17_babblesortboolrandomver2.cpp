#include <iostream>
#include <vector>
#include <algorithm> 
#include <random>
#include <chrono>
using namespace std;

void bubbleSortOptimized(vector<int>& arr){
    int n = arr.size();
    bool swapped;
    
    for(size_t i = 0; i < n -1; ++i){
        swapped = false;
        for(size_t j = 0; j < n - i - 1; ++j){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
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