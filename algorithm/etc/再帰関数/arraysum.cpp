#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int arraySum(vl &arr,int i){
    if(i >= arr.size()) return 0;
    return arr[i] + arraySum(arr,i + 1);
}

int main(){
    vl arr = {1,2,3,4};
    cout << arraySum(arr,0);
    return 0;
}