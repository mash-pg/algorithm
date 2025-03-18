#include <bits/stdc++.h>
using namespace std;

int main(void){
    long n;
    long even;
    string result;
    cin >> n;
    for(int i = 0; i < n; i++){
        even  = n;
        even = int(even / 2);
        even = even * 2;
        if(even == n){
            result = "好き";
        }else{
            result = "嫌い";
        }
    }
    cout << result << endl;

    return 0;
}