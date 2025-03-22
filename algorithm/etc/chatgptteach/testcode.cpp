#include "/home/mash/projects/algorithm/include/template.hpp"

ll partitionfn(vl &arr, ll left, ll right){
    ll pivot = arr[right];  // ピボットの選択（通常、右端を選ぶ）
    ll i = left - 1;        // 小さい値のためのインデックス

    for(ll j = left; j < right; j++){
        if(arr[j] <= pivot){ // ピボットより小さい要素を左側に集める
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]); // ピボットを正しい位置に配置
    return i + 1; // ピボットの新しいインデックスを返す
}


// クイックソートの概略（C++）
void quick_sort(vl &arr, ll left, ll right){
    if(left < right){
        ll pivot = partitionfn(arr, left, right);
        quick_sort(arr, left, pivot - 1);
        quick_sort(arr, pivot + 1, right);
    }
} // O(n log n)



int main(){
    vl arr = {3,5,1,2,7};
    ll n = arr.size();
    ll left = 0;
    quick_sort(arr,0,n - 1);
    for (ll num : arr) cout << num << " ";

    return 0;
}