#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

int main(){

    int score;

    //nから3つの数字を選ぶ
    //while文
    while(true){
        int n,x;
        int cnt = 0;
        cin >> n >> x;
        if( n == 0 && x == 0){
            break;
        }
        //i < j < kの順に3つ並ぶ（重複なし＆順序なし）
        for (int i = 1; i <= n; i++)
        {  
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    score = i + j + k;
                    if(score == x){
                        cnt++;
                    }
                }   
            }
        }
        cout << cnt << endl;
    }

    

    
    return 0;
}