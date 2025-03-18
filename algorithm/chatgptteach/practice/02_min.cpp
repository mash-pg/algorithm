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

    int min_value = arr[0];

    for(int i = 1; i< N;i++){// 2番目の要素から比較
        if(arr[i] < min_value){
            min_value = arr[i];// より小さい値を更新
        }
    }
    cout << min_value << endl;

}