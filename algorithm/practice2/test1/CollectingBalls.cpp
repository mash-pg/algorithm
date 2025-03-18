#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;

//配列
int x[110];
int main(){
    //N：ボールの数
    //K：A～Bまでの距離
    //x:A～ボールまでの距離

    /*
            2
            9
            3 6
    */ 
    int N,K;
    cin >> N >> K;
    //N回値を配列に格納する
    for(int i = 0; i < N;i++){
        //横の配列を取得していく
        cin >> x[i];
    }
    //初期値を０の設定
    int ans = 0;
    //N回AとBからの距離の最小値を求める
    for(int i =0 ;i<N;i++){
        ans += 2*min(x[i],K-x[i]);
    }
    cout << ans << endl;
}