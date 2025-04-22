#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    string s;
    cin >> s;
    int n = s.size();
    //結果をぶち込む
    string result = "";
    //-が連続しているかどうか
    bool haihun = false;

    for (int i = 0; i < s.size(); i++)
    {
        //-がある場合
        if(s[i] == '-'){
            if(!haihun){
                result += '-';
                haihun = true;
            }

        } else {
            result += s[i];
            haihun = false;
        }
    }
    
    cout << result << endl;
    return 0;
}