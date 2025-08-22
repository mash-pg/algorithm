#include <bits/stdc++.h>
using namespace std;

int main(void){
    int h;
    int w;
    cin >> h;
    cin >> w;
    
    int area = 0;
    int around = 0;
    area = h * w;
    around = 2 * (h + w);
    cout << area << " " << around << endl;
}