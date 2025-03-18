#include <iostream>
#include <vector>
using namespace std;

int digitsSum(int n){
    if(n < 10)return n;//ベースケース（１桁ならそのまま返す）
    int a = n % 10;
    int b =  n / 10;
    return a + digitsSum(b);

}
// digitsSum(1234) = 4 + digitsSum(123)
// digitsSum(123)  = 3 + digitsSum(12)
// digitsSum(12)   = 2 + digitsSum(1)
// digitsSum(1)    = 1  // ベースケース（1桁なのでそのまま返す）
int main(){
    int n;
    cout << "整数を入力：";
    cin >> n;
    int result = digitsSum(n);
    cout << "桁の合計：" << result << endl;

    return 0;
}