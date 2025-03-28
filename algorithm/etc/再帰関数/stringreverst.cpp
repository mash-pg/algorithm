#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

string reverse(string s){
    //条件
    if (s.empty()) return ""; 
    char first = s[0];//先頭文字を取得
    string rest = s.substr(1);//残りの文字列取得
    return reverse(rest) + first;//残りを逆にしたもの＋最初の文字列
}

int main(){
    string s;
    cin >> s;
    cout << reverse(s);
    return 0;
}