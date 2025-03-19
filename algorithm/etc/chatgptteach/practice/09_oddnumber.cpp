#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N = 0;
    int evensum = 0;
    int oddsum = 0;
    
    cout << "配列の要素数を入力してください: ";
    while (!(cin >> N) || N <= 0) { // 数値以外の入力や負数・ゼロを防ぐ
        cout << "無効な入力です。正の整数を入力してください: ";
        cin.clear(); // エラー状態をリセット
        cin.ignore(10000, '\n'); // 入力バッファをクリア
    }

    cout << N << " 個の整数を入力してください: ";
    for (int i = 0; i < N; ++i) {
        int num;
        while (!(cin >> num)) { // 数値以外の入力を防ぐ
            cout << "無効な入力が検出されました。整数を入力してください: ";
            cin.clear();
            cin.ignore(10000, '\n');
        }

        if (num % 2 == 0) {
            evensum += num;
        }else{
            oddsum += num;
        }
    }

    cout << "偶数の合計: " << evensum << endl;
    cout << "奇数の合計: " << oddsum << endl;
    return 0;

}