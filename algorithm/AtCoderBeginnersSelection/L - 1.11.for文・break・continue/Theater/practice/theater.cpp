#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;
/*
    R-L+Nを見つければいい。
*/ 
int main(){
    int N;
    cin >> N;
    int ans =0;
    for(int i = 0;i<N;i++){
        int l;
        int r;
        cin >> l >> r;
        ans += r-l+1;
        cout << endl;
        cout << ans;
    }
}