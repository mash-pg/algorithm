#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    int n;
    cin >> n;
    set<int> s;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int value;
        cin >> value;
        s.insert(value);
    }
    int search_value;
    cin >> search_value;
    for(int x : s){
        if(x == search_value) {
            cnt++;
        }
    }
    cout << (cnt > 0 ? "Yes" : "No") << endl;

    return 0;
}