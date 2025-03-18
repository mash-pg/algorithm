#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N,sum = 0;
    cout << "配列の要素数を入力してください: ";
    cin >> N;

    if(cin.fail() || N <= 0){
        cout << "無効な入力です。正の整数を入力してください。" << endl;
        return 1;
    }

    cout << N << "個の整数を入力してください:";
    for(int i = 0;i < N; ++i){
        int num;
        cin >> num;
        if(cin.fail()) {
            cout << "無効な入力が検出されました。整数を入力してください。" << endl; 
            return 1;
        }

        if(num % 2 == 0){
            sum += num;
        }
    }
    cout << "偶数の合計: " << sum << endl;
    return 0;

}