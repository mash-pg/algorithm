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
    int x;//倍数①
    int y;//倍数②
    cin >> n >> x >> y;
    for(int i = 1; i<= n; i++){
        string result;
        if(i % y == 0 && i % x == 0){
            result = "AB";
            cout << result<< endl;
        }else if(i % y == 0){
            result = "B";
            cout << result<< endl;
        }else if(i % x == 0 ){
            result = "A";
            cout << result << endl;
        }else{
            result = "N";
            cout << result << endl;
        }
    }
}

