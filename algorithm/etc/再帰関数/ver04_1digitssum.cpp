#include <iostream>
#include <algorithm>
using namespace std;

int digitsSum(int n) {
    if(n < 10) return n;
    return n % 10 + digitsSum(n/10);
}

int main(){
    int n;
    cin >> n;
    cout << digitsSum(n);
}