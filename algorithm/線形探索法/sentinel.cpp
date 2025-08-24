#include <vector>
#include <iostream>

using namespace std;

int main(){
    int n,x;
    cin >> n >> x;

    vector<int> arr(n + 1);
    for (int i = 0; i < n; i++) cin >> arr[i];
    arr[n] = x;

    int i = 0;
    while(arr[i] != x){
        i++;
    }
    (i < n) ? cout << "あるよ" << endl : cout << "ないよ" << endl;
    return 0;
}