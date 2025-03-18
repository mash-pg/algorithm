#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;

int main(void){
    int N;
    cin >> N;
    int fx =0;
    int x = N;
    for(int i = 0; x;i++){
        fx += x % 10;
        x /=10;
        //cout << x;
    }


    if(N % fx == 0){
        cout << "Yes";
    }else{
        cout << "No";
    }
}