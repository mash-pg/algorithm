#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    int arr[] = {1,2,2,524,577,2424,44};
    ll max_value = arr[0];
    ll min_value = arr[0];
    for(ll num : arr)  {
        if (num > max_value) max_value = num;
        if (num < min_value) min_value = num;
    }
    
    cout << "配列の最大値" << max_value << endl; 
    cout << "配列の最小値" << min_value << endl;
    return 0;
}