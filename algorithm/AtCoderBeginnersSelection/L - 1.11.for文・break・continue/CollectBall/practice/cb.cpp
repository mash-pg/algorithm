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
    int X[110];
    cin >> N >> K;
    for(int i = 0; i < N; i++){
        cin >> X[i];
    }
    int ans = 0;

    for(int i = 0; i < N; i++){
        ans += min(X[i] * 2,(K - X[i])*2);
    }
    cout << ans << endl;
}