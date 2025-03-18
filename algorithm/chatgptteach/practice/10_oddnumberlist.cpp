#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N = 0;
    int evensum = 0;
    int oddsum = 0;
    vector<int> evens;
    vector<int> odds;
    
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
            evens.push_back(num);
            evensum += num;
        }else{
            odds.push_back(num);
            oddsum += num;
        }
    }
    
    cout << "偶数のリスト: ";
    for (size_t i = 0; i < evens.size(); i++) {
        cout << evens[i];
        if (i != evens.size() - 1) cout << ", "; // 最後のカンマを防ぐ
    }
    cout << endl;
    cout << "奇数のリスト: ";
    for (size_t i = 0; i < odds.size(); i++) {
        cout << odds[i];
        if (i != odds.size() - 1) cout << ", "; // 最後のカンマを防ぐ
    }
    cout << endl;
    cout << "偶数の合計: " << evensum << endl;
    cout << "奇数の合計: " << oddsum << endl;
    cout << "偶数の個数: " <<evens.size() << endl;
    cout << "奇数の個数: "<< odds.size() << endl;
    return 0;

}