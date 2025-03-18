#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h;
    int w;
    while (true)
    {
        cin >> h >> w;
        for(int i = 0;i < h; i++){
            for(int j = 0; j < w ;j++){
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
        if(h == 0 && w == 0){
            break;
        }
    }
    return 0;

}