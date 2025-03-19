#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int arrSum(vector<int>& arr,int index){
    if(index == arr.size()) return 0;
    return arr[index] + arrSum(arr,index + 1);
}

int main(){
    int N;
    cin >> N;
    vector<int> arr;
    for(int i = 1;i<=N;i++) arr.push_back(i);
    cout << arrSum(arr,0);
}
