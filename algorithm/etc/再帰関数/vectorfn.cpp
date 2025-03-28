#include "/home/mash/projects/algorithm/include/template.hpp"

int arrSum(vl &arr,int n){
    if(n >= arr.size()) return 0;//範囲外の処理
    return arr[n] + arrSum(arr,n + 1);
}

int main(){
    vl arr = {1,2,3,4};
    cout << arrSum(arr,0) << endl;

    return 0;
}