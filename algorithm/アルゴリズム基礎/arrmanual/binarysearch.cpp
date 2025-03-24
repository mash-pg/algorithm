#include "/home/mash/projects/algorithm/include/template.hpp"
ll binarySearch(ll arr[],ll left,ll right, ll target){
    while(left <= right){
        ll mid = left + (right - left) /2;
        if(arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else if (arr[mid] > target) right = mid - 1;
    }
    return -1;
}
int main(){
    ll arr[] = {10, 20, 30, 40, 50,20};
    ll n = sizeof(arr)/sizeof(arr[0]);
    ll left = 0;
    ll right = n - 1;
    //ソートすると{10,20,20,30,40,50,20}
    sort(arr,arr + n);
    ll target = 30;
    ll index = binarySearch(arr,left,right,target);
    if (index != -1) cout << "Found at index: " << index << " value : " << arr[index] << endl;
    else cout << "Not found" << endl;
    return 0;
}