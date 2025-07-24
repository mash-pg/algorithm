#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int fact(int n){
    if(n == 0) return 1;

    return n * fact(n - 1);
}

int main(){
    int n = 0;
    cin >> n;
    cout << fact(n) << endl;
}