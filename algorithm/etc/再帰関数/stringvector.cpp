#include "/home/mash/projects/algorithm/include/template.hpp"

void arrreverse(vs arr , int n){
    if(n <= 0){
        return ;
    }
    cout << arr[n - 1] << endl;
    arrreverse(arr,n - 1);
}

int main(){
    vs arr =  {"apple", "banana", "cherry"};
    int n = arr.size();
    arrreverse(arr,n);

    return 0;
}