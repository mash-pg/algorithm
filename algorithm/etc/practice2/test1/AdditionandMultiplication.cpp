#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;

/*
これを使うとエラーが出てまう。。。
とりま、使用禁止。
所詮は、for文の短縮コマンド。
明日は、処理の流れを追う！！
*/ 
//#define rep(i, n,x) for (int i = 0; i < (int)(n); i++)
/*
入力例
4
3

入力例１
10
10

*/ 

#define INF INT_MAX/2

//---------------------------4------------------------------------------------------------------------
int main() {
    int N , K;
    cin >> N >> K;
 
    queue<int> que;
    que.push(1);

    for(int i =0;i<N;i++){
        queue<int> q;
        //queの中身が空でない場合は、処理を継続する。
        //
        while (!que.empty()) {
            int x = que.front(); 
            que.pop();
            q.push(x * 2);
            q.push(x + K); 
        }
        swap(que, q);
    }
    int ans = INF;
    while (!que.empty()) {
        int x = que.front(); 
        que.pop();
        ans = min(ans, x);
    }
    cout << ans << endl;
}