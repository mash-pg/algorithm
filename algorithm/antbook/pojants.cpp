#include <iostream>
#include <cmath>
using namespace std;

const int MAX_N = 100000;


int main(){
    //Lは長さcm
    //nは蟻の数
    //x左端からの距離
    int L,n,x[MAX_N];
    int minT = 0;
    cin >> L >> n;
    for(int i = 0; i < n;i++){
        cin >> x[i];
    }
    //最小時間を計算
    for(int i = 0;i < n;i++){
        minT = max(minT,min(x[i],L - x[i]));
    }

    int maxT = 0;
    for(int i = 0; i < n; i++){
        maxT = max(maxT,max(x[i],L-x[i]));
    }

    cout << minT << endl;
    cout << maxT << endl;

    return 0;
}