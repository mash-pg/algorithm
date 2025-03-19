#include <iostream>
#include <vector>
#include <algorithm> // max_elementを使うため
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> arr(N);

    for(int i = 0;i < N; ++i){
        cin >> arr[i];
    }

    int max_value = arr[0];

    for(int i = 1; i< N;i++){// 2番目の要素から比較
        if(arr[i] > max_value){
            max_value = arr[i];// より大きい値を更新
        }
    }
    cout << max_value << endl;

}