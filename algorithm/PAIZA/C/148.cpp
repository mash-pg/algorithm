#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>

using namespace std;

int main(){
    int n;
    int l;
    cin >> n >> l;
    vector<int> enemy(n);

    for(int i = 0; i < n; i++){
        cin >> enemy[i];
    }
    for(int i = 0; i< n;i++){
        int x = enemy[i];
        //勝利
        if(l > x){
            l += enemy[i] / 2;
            enemy[i] /= 2;
        }
        //敗北
        if(l < x){
           l /= 2;
        }
    }
    cout << l << endl;
    return 0;
}

