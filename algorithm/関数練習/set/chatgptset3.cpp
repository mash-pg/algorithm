#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    int n;
    cin >> n;
    set<int> s;
    
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        s.insert(value);
    }

    int search_value;
    cin >> search_value;

    if(s.count(search_value) > 0){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}