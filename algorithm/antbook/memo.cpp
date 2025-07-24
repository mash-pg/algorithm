#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;
const long long MAX_N = 10000000;

int memo[MAX_N + 1];
long long fib(int n){
    if(n <= 1) return n;
    if(memo[n] != 0) return memo[n];
    return memo[n]  = fib(n - 1) + fib(n-2);
}

int main(){
    long long n = 0;
    cin >> n;
    cout << fib(n) << endl;
}