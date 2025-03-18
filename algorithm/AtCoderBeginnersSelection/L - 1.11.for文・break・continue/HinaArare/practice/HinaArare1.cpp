#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;
/*
 黄色がある場合とない場合でサーチすることを気づけるかどうかも重要
*/ 
int main(void){
    int N;
    cin >> N;

    for(int i = 0; i < N;i++){
        string s;
        cin >> s;

        if(s == "Y"){
            cout << "Four" << endl;
            return 0;
        }
    }
    cout << 'three' << endl;

    return 0;
}