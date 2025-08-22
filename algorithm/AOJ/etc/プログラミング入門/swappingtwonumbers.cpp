#include <bits/stdc++.h>
using namespace std;

int main(void){
    int i = 0;
    while(true){
        int x;
        int y;
        cin >> x;
        cin >> y;
        if(x > y){
            int tmp;
            tmp = x;
            x = y;
            y = tmp;

        }
        if(x == 0 and y == 0){
            break;
        }
        cout << x << " " << y << endl;
    }

    return 0;
}