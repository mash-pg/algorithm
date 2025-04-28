#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    set<int> s;

    s.insert(5);
    s.insert(2);
    s.insert(5);
    s.insert(1);

    for(int x : s){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}