#include <iostream>
#include <vector>
using namespace std;

void printDigitsReverse(int n ){
    if (n == 0) return;  // 終了条件
    int a = n % 10;//1の位を出力
    int b =  n / 10;
    cout << a;
    if(b != 0) cout << " ";
    return printDigitsReverse(b);
}
/*
1234
printDigitsReverse(1234) 
1234 % 10 = 
printDigitsReverse(123)
123 % 10 = 3
printDigitsReverse(12)
12 % 10 = 2
printDigitsReverse(1)
1 % 10 = 1
printDigitsReverse(0) 終了

*/

int main(){
    int n;
    cout << "整数を入力：";
    cin >> n;

    cout << "逆の合計：";
    printDigitsReverse(n);
    cout << endl;

    return 0;
}