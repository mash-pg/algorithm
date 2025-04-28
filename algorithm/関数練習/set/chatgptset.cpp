#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    int n;
    cin >> n;
    set<int> s;
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        s.insert(value);
    }

    for(int x : s){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}