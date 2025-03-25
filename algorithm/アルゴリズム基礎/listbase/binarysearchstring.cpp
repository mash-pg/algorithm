#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vs words = {"tets","fadvag","adabrgqr","aaa"};
    string target = "tets1";
    sort(words.begin(),words.end());
    bool found = binary_search(words.begin(),words.end(),target);

    cout << (found ? "見つかりました" : "見つかりません") << endl;


    return 0;

}