#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    int arr[] = {1,2,3,4,5,6,6,199,35,6560};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max_value =*max_element(arr,arr+n);
    int min_value = *min_element(arr,arr+n);

    cout << "最大値：" << max_value << endl;
    cout << "最小値：" << min_value<< endl;
}