#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;


int main(){
    int n,x;
    cin >> n >> x;
    vector<int> arr(n);
    for(int i = 0; i < n; i++) cin >> arr[i];

    sort(arr.begin(),arr.end());
    int lo = 0,hi = n - 1;
    bool flag = false;
    while(lo <= hi){
        int mid = lo + (hi - lo)/2;
        if(arr[mid] == x){
            flag = true;
            break;
        }else if(arr[mid] < x){
            lo = mid +1;
        }else{
            hi = mid -1;
        }
    }
    cout << (flag ? "あります" : "ないです") << endl;

    return 0;

}