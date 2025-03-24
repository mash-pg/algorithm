#include "/home/mash/projects/algorithm/include/template.hpp"

ll linerSearch(ll arr[],ll n,ll target){
    for(int i = 0; i < n; i++){
        if(arr[i] == target) return i;
    }
    return -1;
}

int main(){
    ll arr[]  =  {10, 20, 30, 40, 50};
    ll target = 130;
    ll n = sizeof(arr)/sizeof(arr[0]);
    ll index = linerSearch(arr,n,target);
    if(index != -1) cout << "みつけたよ。インデックスは、" << index << "値は、" << arr[index] <<endl;
    else cout << "ないよ" << endl;
}