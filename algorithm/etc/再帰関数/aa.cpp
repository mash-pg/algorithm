#include "/home/mash/projects/algorithm/include/template.hpp"
void reverse(string s){
    if(s.empty()) return;
    reverse(s.substr(1));
    cout << s[0];    
}

int main(){
    string s;
    cin >> s;
    cout << endl;
    reverse(s);
}