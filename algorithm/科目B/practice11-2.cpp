#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int calcHash1(const vector<long long>& arr, int value){
    return (value % arr.size()) ;
}
int calcHash2(const vector<long long>& arr,int value){
    return ((value + 3)%arr.size()) ;
}

bool add(vector<long long>& arr,int value){
    int i = calcHash1(arr,value);
    if(arr[i] == -1){
        arr[i]  = value;
        return true;
    }else{
    int  j = calcHash2(arr,value);
        if(arr[j] == -1){
            arr[j] = value;
            return true;
        }
    }
    return false;
}

int main(){
    vector<long long> a(100);
    a = {-1,-1,-1,-1,-1};
    cout << "前：";
    for(auto var : a)cout << " " <<var;
    cout << endl;
    add(a,3);
    add(a,18);
    add(a,11);
    cout << "後：";
    for(auto var : a)cout<< " " <<var;
    
    return 0;
}