#include <bits/stdc++.h>
using namespace std;

int main(void){
    while(true){
        int h;
        int w;
        cin >> h >> w;
        //
        for (int i = 0; i < h; i++)
        {
            for (int j = 0; j < w; j++)
            {
                if(i == 0 or j == 0 or i + 1 == h or j + 1 == w){
                    cout << "#";
                } else {
                    cout << ".";
                }
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