#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

void reversePrint(string s){
    if(s.empty()) return ;
    string rest = s.substr(1);
    reversePrint(rest);
    cout << s[0] << endl;
}

int main(){
    string s;
    cin >> s;
    reversePrint(s);
    return 0;
}