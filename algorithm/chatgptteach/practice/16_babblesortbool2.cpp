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
            if(arr[j] < arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(!swapped) break;
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