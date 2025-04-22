#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    while(true){
        string str;
        cin >> str;

        if(str == "-") break;

        int m;
        cin >> m;

        for (int i = 0; i < m; i++)
        {
            int h;
            cin >> h;
            
            //下からh枚取り出して上に積む＝前からh文字を後ろに移動
            str = str.substr(h) + str.substr(0, h);
        }
        cout << str << endl;
    
    }

    return 0;
}