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
    int m,f,r;

    bool flag = false;
    long long score = 0;

    while(!flag){
        cin >> m >> f >> r;

        //処理終了
        if (m == -1 && f == -1 && r == -1){
            break;
        }
        //mとfが欠席したらどちらか欠席したらだめ
        if(m == -1 || f == -1){
            cout << "F" << endl;
            continue;
        }


        score = m + f;

        if(score >= 80){
            cout << "A" << endl;
        }else if(score >= 65 && score < 80){
            cout << "B" << endl;
        }else if(score >= 50 && score < 65){
            cout << "C" << endl;
        }else if(score >= 30 && score < 50){  
            //再試験処理
            if(r >= 50){
                cout << "C" << endl;
            }else{
                cout << "D" << endl;
            }
        }else if(score < 30){
            cout << "F" << endl;
        }
    }
    
    return 0;
}