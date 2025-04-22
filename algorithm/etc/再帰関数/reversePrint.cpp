#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

//文字列の逆
vchar reversP;

void reversePrint(string s,int i){
    if(i == s.size()) return;
    reversePrint(s,i+1);
    cout << s[i];
    reversP.push_back(s[i]);
}

int main(){
    string s;
    cin >> s;
    reversePrint(s,0);
    cout << endl;
    for (int i = 0; i < reversP.size(); i++)
    {
        cout << reversP[i] << endl;
    }
    
    return 0;
}