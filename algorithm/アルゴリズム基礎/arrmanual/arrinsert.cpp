#include "/home/mash/projects/algorithm/include/template.hpp"

void insertElement(ll arr[],ll &size,ll pos,ll value){
    for(int i = size;i > pos;i--) {
        arr[i] = arr[i - 1];//要素を後ろにずらす
    }
    arr[pos] = value;
    size++;
}


int main(){
    ll arr[] = {10, 20, 30, 40, 50,20};
    ll size = sizeof(arr)/sizeof(arr[0]);
    ll pos = 2;
    ll value = 25;
    //sort(arr,arr + size);

    insertElement(arr,size,pos,value);
    for(ll i = 0; i < size;i++) cout << arr[i] << " ";
    cout << endl;
}