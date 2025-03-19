#include <iostream>
#include <vector>
#include <algorithm>
#include <random>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr;

    for(int i = 1; i <= n; i++){
        arr.push_back(i*2);
    }
    cout << "シャッフル前：" << endl;
    for(size_t i = 0;i <= arr.size() - 1;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    random_device rd;
    mt19937 g(rd());
    shuffle(arr.begin(),arr.end(),g);
    
    cout << "シャッフル後：" << endl;
    for(size_t i = 0;i <= arr.size() - 1;i++){
        cout << arr[i] << " ";
    }
    cout <<endl;
    cout << "max value :" << *max_element(arr.begin(),arr.end()) << endl;
    cout << "min value :" << *min_element(arr.begin(),arr.end()) << endl;
    return 0;
}