#include "/home/mash/projects/algorithm/include/template.hpp";

int main(){
    vector<int> v = {1,2,3};
    v.push_back(4);
    v.pop_back();

    for (int i : v){
        cout << i << " ";
    }

    return 0;
}