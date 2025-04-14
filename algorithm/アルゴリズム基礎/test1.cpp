#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>

using namespace std;
int main(){
    int N;
    cin >> N;
    bool logged_in = false;
    int cnt = 0;
    for(int i = 0; i < N;i++){
        string s;
        cin >> s;
        if(s == "login"){
            logged_in = true;
        }else if(s == "logout"){
            logged_in = false;
        }else if(s == "private"){
            if(!logged_in){
                cnt++;
            }
        }
    }

    cout << cnt << endl;
    return 0;
}