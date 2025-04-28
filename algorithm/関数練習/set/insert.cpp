#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    vector<int> v = {1, 2,  4, 5};

    v.insert(v.begin() + 2,3);

    for(int x :v){
        cout << x << " ";
    }

    cout << endl;

    return 0;
}