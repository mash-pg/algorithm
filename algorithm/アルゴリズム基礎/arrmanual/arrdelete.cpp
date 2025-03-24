#include "/home/mash/projects/algorithm/include/template.hpp"

void insertElement(ll arr[],ll &size,ll pos){
    for(int i = pos;i < size - 1;i++) {
        arr[i] = arr[i + 1];//要素を前に詰める
    }
    size--;
}


int main(){
    ll arr[] = {10, 20, 30, 40, 50,20};
    ll size = sizeof(arr)/sizeof(arr[0]);
    ll pos = 2;
    //sort(arr,arr + size);

    insertElement(arr,size,pos);
    for(ll i = 0; i < size;i++) cout << arr[i] << " ";
    cout << endl;
}