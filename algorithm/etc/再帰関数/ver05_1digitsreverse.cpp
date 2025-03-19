#include <iostream>
#include <algorithm>
using namespace std;

void printDigitsReverse(int n){
    if(n == 0) return;
    n % 10;
    n / 10;
    cout << n % 10;
    if(n / 10 != 0) cout << " " << flush;
    return printDigitsReverse(n/10);
};

int main(){
    int n;
    cin >> n;
    printDigitsReverse(n);
    cout << endl;
}