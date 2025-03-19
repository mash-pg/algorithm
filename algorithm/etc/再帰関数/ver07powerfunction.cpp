#include <iostream>
#include <vector>
using namespace std;

int power(int a , int b){
    if(b == 0) return 1;
    int c =  power(a,b-1);
    return a * c;
}
/*
power(2, 3) = 2 * power(2, 2)
power(2, 2) = 2 * power(2, 1)
power(2, 1) = 2 * power(2, 0)
power(2, 0) = 1  // ベースケース

power(2, 0) → 1
power(2, 1) → 2 * 1 = 2
power(2, 2) → 2 * 2 = 4
power(2, 3) → 2 * 4 = 8
*/

int main(){
    int a,b;
    cin >> a;
    cin >> b;
    cout << a << "^" << b << " = " << power(a,b) << endl;
}