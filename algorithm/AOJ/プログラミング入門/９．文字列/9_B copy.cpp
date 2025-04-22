#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cin >> str;
    int h;
    cin >> h;
    //最後からh文字を取得する
    cout << str.substr(h) << " ";
    //先頭からh文字を取得する
    cout << str.substr(0,h) << " ";
    cout << endl;
    str = str.substr(h) + str.substr(0, h);
   
    return 0;
}