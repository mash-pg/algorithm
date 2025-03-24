#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    vl vec = {1,2,2,524,577,2424,44};
    ll max_value = *max_element(vec.begin(),vec.end());
    ll min_value = *min_element(vec.begin(),vec.end());

    cout << "ベクトルの最大値" << max_value << endl; 
    cout << "ベクトルの最小値" << min_value << endl;
    return 0;
}