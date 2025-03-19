#include <iostream>
#include <vector>
using namespace std;

int calculateMax(vector<int>& arr){
    int max_value = arr[0]; // 最大値の初期値    
    for(int i = 1; i < arr.size(); i++) { // 2番目の要素から比較
        if(arr[i] > max_value) {
            max_value = arr[i]; // 最大値を更新
        }
    }
    return max_value;
}

int calculateMin (vector<int>& arr){
    int min_value = arr[0]; // 最小値の初期値
    for(int i = 1; i < arr.size(); i++) { // 2番目の要素から比較
        if(arr[i] < min_value) {
            min_value = arr[i]; // 最小値を更新
        }
    }

    return min_value;
}

int main() {
    int N;
    cin >> N;
    vector<int> arr(N);

    for(int i = 0; i < N; ++i) {
        cin >> arr[i];
    }
    cout << calculateMax(arr) << " " << calculateMin(arr) << endl;
    return 0;
}
