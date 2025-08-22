#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    string x;
    while(true){
        cin >> x;
        if(x == "0") break;
        int sum = 0;

        for (char c : x) {
            sum += c - '0'; // 文字を数値に変換して加算
        }
        cout << sum << endl;
    }
    
    return 0;
    
}