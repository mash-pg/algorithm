#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;

int main(void){
    int L ,R;

    cin >> L >> R;
    int ans = 0;
    for (int a = 1; a < 10; a++)
    {
        for (int b = 0; b < 10; b++)
        {
         
            for (int c = 0; c < 10; c++)
            {
                int x = 10001 * a + 1010 * b + 100 * c;
                if(x >= L && x <= R  ){
                    ans ++;
                }
            }
        }
        
    }
    cout << ans << endl;
    return 0;
    
}