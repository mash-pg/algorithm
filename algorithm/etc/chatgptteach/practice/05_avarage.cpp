#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N;
    int sum = 0;
    cin >> N;
    vector<int> arr(N);

    for(int i = 0;i < N; ++i){
        cin >> arr[i];
        sum += arr[i];
    }
    
    int avg = sum/N;
    cout << avg << endl;

    return 0;

}