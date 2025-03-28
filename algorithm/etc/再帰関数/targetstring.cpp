#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int targetString(string s,char target){
    if(s.empty()) return 0;
    // int cnt = 0;
    // if(s[0] == target){
    //     cnt += 1;
    // }
    int cnt = ((s[0]  == target) ? 1 : 0);
    string rest = s.substr(1);
    
    return cnt + targetString(rest,target);
}

int main(){
    string s = "banana";
    char target = 'a';
    cout << targetString(s,target);
    return 0;
}