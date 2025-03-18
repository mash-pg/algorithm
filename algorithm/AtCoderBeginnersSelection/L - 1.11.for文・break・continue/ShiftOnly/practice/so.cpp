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
    int a[220];
    for (int i = 0; i < N; i++)
    {   
        cin >> a[i];
    }

    int ans = 0;

    while(1){
        bool odd  = false;
        for(int i = 0;i<N;i++){
            if(a[i] % 2 ==1){
                odd = true;
            }
        }
        if(odd){
            break;
        }
        ans++;
        for(int i = 0;i<N;i++){
            a[i] /= 2;
        }
    }
    cout << ans << endl;

    return 0;

    
}