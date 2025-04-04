#include "/home/mash/projects/algorithm/include/template.hpp"

//quicksort関数（再帰処理）
//partition関す（ピボットで分ける）

ll partition(vl& arr,ll left , ll right,ll pivot){
    while(left <= right) {
        while(arr[left] < pivot) left++;
        while(arr[right] > pivot) right--;
        if(left <= right){
            swap(arr[left],arr[right]);
            left++;
           right--;
        }
    }
    return left;
} 

void quicksort(vl& arr,ll left , ll right){
    if(left >= right) return ;

    ll pivot = arr[(left + right) / 2]; //真ん中ピボット
    ll index = partition(arr,left,right,pivot);
    quicksort(arr,left,index-1);
    quicksort(arr,index,right);
}

//main関数でサンプル実行
int main(){
    //vl data = {9, 3, 7, 4, 1, 6, 8, 2, 5};
    vl data =  {3, 3, 3, 3, 3, 3, 3};
    cout << "Before sort: ";
    for(ll num : data) cout << num << " ";
    cout << endl;

    quicksort(data,0,data.size() - 1);

    cout << "After sort: ";
    for(ll num : data) cout << num << " ";
    cout << endl;

    return 0;
}