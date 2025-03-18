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
    int K;
    cin >> N >> K;

    int x =1;

    for(int i =0;i<N;i++){
        x = min(x*2,x+K);
    }

    cout << x << endl;
    return 0;
}