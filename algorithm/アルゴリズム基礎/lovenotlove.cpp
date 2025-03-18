#include <bits/stdc++.h>
using namespace std;

int main(void){
    long n;
    int swt = 1;
    cin >> n;
    for(int i = 0; i < n; i++){
        if(swt == 1){
            cout << "好き" << endl;
            swt = 0;
        }else  if(swt == 0){
            cout << "嫌い" << endl;
            swt = 1;
        }
    }

}