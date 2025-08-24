#include <iostream>
#include <vector>

using namespace std;

int main(){
    //入力の基本
    int n;
    int x;
    cin >> n >> x;
    vector<int> arr(n);
    bool flag = false;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i=0; i<=n; i++){
        if(arr[i] == x){
            flag = true;
            break;
        }
    }
    (flag == true)?cout << "あるよ" << endl: cout << "ないよ" << endl; 

    return 0;
}