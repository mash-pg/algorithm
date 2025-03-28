#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int vowelCnt(string s){
    if(s.empty()) return 0;
    int cnt = 0;
    // char target = 'a';
    // char target1 = 'i';
    // char target2 = 'u';
    // char target3 = 'e';
    // char target4 = 'o';
    // if(s[0] == target){
    //     cnt += 1;
    // }
    // if(s[0] == target1){
    //     cnt += 1;
    // }
    // if(s[0] == target2){
    //     cnt += 1;
    // }
    // if(s[0] == target3){
    //     cnt += 1;
    // }
    // if(s[0] == target4){
    //     cnt += 1;
    // }
    // string rest = s.substr(1);
    if(string("aiueo").find(s[0]) != string::npos){
        cnt = 1;
    }
    
    return cnt + vowelCnt(s.substr(1));
}

int main(){
    string s;
    cin >> s;
    cout << vowelCnt(s);
    return 0;
}