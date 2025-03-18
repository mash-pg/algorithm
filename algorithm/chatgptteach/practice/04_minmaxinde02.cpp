#include <iostream>
#include <vector>
#include <tuple> // tupleを使うために必要
using namespace std;

tuple<int,int,int,int> calculateMaxMin(vector<int>& arr){
    
    int max_value = arr[0]; // 最大値の初期値    
    int min_value = arr[0]; // 最小値の初期値
    int max_index = 0;
    int min_index = 0;
    for(int i = 1; i < arr.size(); i++) { // 2番目の要素から比較
        if(arr[i] > max_value) {
            max_value = arr[i]; // 最大値を更新
            max_index = i;
            
        }
        if(arr[i] < min_value) {
            min_value = arr[i]; // 最小値を更新
            min_index = i;
        }
    }
    return {max_value,min_value,max_index,min_index};
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    int max_value,min_value,max_index,min_index;
    tie(max_value, min_value,max_index,min_index) = calculateMaxMin(arr);
    cout << "Max: " << max_value << ", Min: " << min_value << endl;
    cout << "MaxIndex: " << max_index << ", MinIndex: " << min_index << endl;
    return 0;
}
