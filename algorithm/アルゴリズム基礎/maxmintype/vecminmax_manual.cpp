#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    vl vec = {1,2,2,524,577,2424,44};
    ll max_value = vec[0];
    ll min_value = vec[0];
    for(ll num : vec)  {
        if (num > max_value) max_value = num;
        if (num < min_value) min_value = num;
    }
    
    cout << "ベクトルの最大値" << max_value << endl; 
    cout << "ベクトルの最小値" << min_value << endl;
    return 0;
}