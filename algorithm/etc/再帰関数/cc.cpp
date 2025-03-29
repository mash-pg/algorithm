#include "/home/mash/projects/algorithm/include/template.hpp"

ll searchMax(vl &arr, int i) {
    if (i == arr.size() - 1) return arr[i];
    ll restMax = searchMax(arr, i + 1);
    return max(arr[i], restMax);
}

int main(){
    vl arr = {5, 2, 10, 1, 9};
    int i = 0;
    cout << searchMax(arr,i) << endl;
}