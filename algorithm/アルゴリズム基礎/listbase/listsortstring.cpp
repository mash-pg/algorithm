#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vs words = {"apple", "banana", "cherry", "date"};
    sort(words.begin(),words.end(),[](const string &a,const string &b)
        {return a.size() < b.size();});
    cout << "文字列の長さでソート:";
    for(const string &word : words) cout << word << " ";

    cout << endl;
    return 0;

}