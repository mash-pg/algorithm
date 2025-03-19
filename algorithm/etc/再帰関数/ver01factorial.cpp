#include <iostream>
#include <vector>
using namespace std;

int factorialFn(int n){
    if(n == 0){
        return 1;
    }

    // cout << "f(n) = " << "f(" << n << ")" << endl;
    // cout << "f(n - 1) = " << "f(" << n - 1 << ")" << endl;
    int f = factorialFn(n - 1);
    // cout << "f(n) = " << "f(" << n << ")" << endl;
    // cout << "f(n - 1) = " << "f(" << n - 1 << ")" << endl;
    // cout << "n : " << n  << " * "<< "n - 1 : " << f << " = " << n * f <<  endl; 
    return n * f;
}

int main(){
    int n = 0;
    cin >> n;
    cout << factorialFn(n) << endl;
}