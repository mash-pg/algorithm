#include <iostream>
#include <vector>
#include <algorithm> // max_elementを使うため
using namespace std;

int main(){
    int N;
    int sum = 0;
    cin >> N;
    vector<int> arr(N);

    for(int i = 0;i < N; ++i){
        cin >> arr[i];
    }
    for(int i = 0; i< N;i++){
        sum += arr[i];
    }

    cout << sum;
    return 0;

}