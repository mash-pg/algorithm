#include <bits/stdc++.h>
using namespace std;

int main(void){
    long n;
    long m = 0;
    long result = 0;
    long result1 = 0;
    cin >> n;
    for(int i = 0; i <= n; i++){
        cout << i << "回数" << endl;
        result = result + i;
        cout << result << endl;
    }
    cout << endl;
    for(int i = 1; i <= n; i++){
        cout << i << "回数" << endl;
        result1 = result1 + i;
        cout << result1 << endl;
    }
    return 0;
}