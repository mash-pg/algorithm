#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>

using namespace std;
int main(){
    int a;
    cin >> a;
    int N = 400;
    int ans = N % a;
    if(ans == 0){
        cout << N / a << endl;
    }else{
        cout << -1 << endl;
    }
    return 0;
}