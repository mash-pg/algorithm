#include <iostream>
#include <cstdio>

using namespace std;
const int MAX_N = 50;


int main() {

    int n,m,k[MAX_N];

    //標準入力より入力
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        cin >> k[i];
    }

    //和がmになる組合せが見つかったどうかのフラグ
    bool f = false;

    //4重ループにより全通りの出方を試す
    for(int a = 0; a < n; a++){
        for(int b = 0; b < n;b++){
            for(int c = 0; c < n;c++){
                for(int d = 0; d < n; d++){
                    if(k[a] + k[b] + k[c] + k[d]==m){
                        f = true;
                    }
                }
            }
        }
    }
    // if (f) puts("Yes");
    // else puts("No");
    if (f) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

    return 0;
}
