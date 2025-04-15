#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, s;
    cin >> k >> s;

    int cnt = 0;
    // 3重ループで全探索で、処理量はO(k^3)になりアウト。
    for(int x = 0; x <= k; ++x){
        for(int y = 0; y <= k; ++y){
            for(int z = 0; z <= k; ++z){
                if(x + y + z == s){
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
