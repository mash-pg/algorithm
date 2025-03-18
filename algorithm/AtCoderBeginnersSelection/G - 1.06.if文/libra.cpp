#include <bits/stdc++.h>
using namespace std;

int main() {

    int a;
    int b;
    int c;
    int d;
    cin >> a >> b >> c >> d;

    int l;
    int r;

    l = a + b;
    r = c + d;

    if(l > r){
        cout << "Left";
    }else if(l < r){
        cout << "Right";
    }else if(l == r){
        cout << "Balanced";
    }
    

}
