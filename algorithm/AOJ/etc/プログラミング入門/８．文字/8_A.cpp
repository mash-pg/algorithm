#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    for (int i = 0; i < s.size(); i++)
    {
        if (islower(s[i])) {//islowerは、小文字か判定する
            //大文字に変換する
            cout << char(toupper(s[i]));
        } else if (isupper(s[i])) {//isupperは、大文字か判定する
            //小文字に変換する
            cout << char(tolower(s[i]));
        } else {
            cout << s[i]; // 英字以外はそのまま出力
        }
    }

    cout << endl;
    return 0;
    
}