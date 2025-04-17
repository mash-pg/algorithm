#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    for(int i = 0; i < n; i++){
        s += "-";
    }
    //文字列の真ん中を取得する
    int mid = n / 2;
    if(n % 2 == 0){
        s[mid - 1] = '=';
        s[mid] = '=';
    }else{
        s[mid] = '=';
    }
    cout << s << endl;
    
    return 0;
} // ← ここが足りてなかった！！
