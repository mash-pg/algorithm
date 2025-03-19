#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    vector<int> v = {1,2,3};
    v.pb(4);
    v.pob();

    for (int i : v){
        cout << i << " ";
    }

    return 0;
}