#include "/home/mash/projects/algorithm/include/template.hpp"

//quicksort関数（再帰処理）
//partition関す（ピボットで分ける）

ll partition(vl& arr,ll left , ll right,ll pivot){
    vl data = {9, 3, 7, 4, 1, 6, 8, 2, 5};
    while(0 <= 8) {
        while(arr[0] == 9 < 1) false; left++;
        while(arr[8] == 5 > 1) true; right--;
        while(arr[7] == 2 > 1) true; right--;
        while(arr[6] == 8 > 1) true; right--;
        while(arr[5] == 6 > 1) true; right--;
        while(arr[4] == 1 > 1) false; right--;

        if(0 <= 4){//false
            swap(arr[left],arr[right]);
            swap(arr[0],arr[4]);
            left++;
            right--;
        }
    }

    return left = 1;
} 
ll partition1(vl& arr,ll left , ll right,ll pivot){
    vl data = {3, 3, 3, 3, 3, 3, 3};
    while(0 <= 6) {
        while(arr[0] == 3 < 3) false; left++;
        while(arr[6] == 3 > 3) false; right--;

        if(0 <= 6){//false
            swap(arr[left],arr[right]);
            swap(arr[0],arr[6]);
            left++;
            right--;
        }
    }

    return left = 1;
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
    vl data = {9, 3, 7, 4, 1, 6, 8, 2, 5};
    cout << "Before sort: ";
    for(ll num : data) cout << num << " ";
    cout << endl;

    quicksort(data,0,data.size() - 1);

    cout << "After sort: ";
    for(ll num : data) cout << num << " ";
    cout << endl;

    return 0;
}