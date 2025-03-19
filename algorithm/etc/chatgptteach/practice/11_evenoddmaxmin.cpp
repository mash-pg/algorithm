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
    if(!evens.empty()){
        for (size_t i = 0; i < evens.size(); i++) {
            cout << evens[i];
            if (i != evens.size() - 1) cout << ", "; // 最後のカンマを防ぐ
        }
    }else{
        cout << "データなし";
    }
    cout << endl;
    cout << "奇数のリスト: ";
    if(!odds.empty()){
        for (size_t i = 0; i < odds.size(); i++) {
            cout << odds[i];
            if (i != odds.size() - 1) cout << ", "; // 最後のカンマを防ぐ
        }
    }else{
        cout << "データなし"; 
    }
    cout << endl;
    
    if(!evens.empty()){
        int evenmax = evens[0];
        int evenmin = evens[0];
        /*　
        　　初期の配列０の値が最大だから0でなく1空の方が効率的である
            例えば、2,4,6,8だとすると
            2と2を比較せずに
            2と4を比較した方が効率的である
            この場合だとevens[0]は、2である
        */
        //偶数の最大値と最小値
        for (size_t i = 1; i < evens.size(); i++) {
            if(evens[i] > evenmax){
                evenmax = evens[i];
            }
            if(evens[i] < evenmin){
                evenmin = evens[i];
            }
        }
        cout << "偶数の最大値: " <<evenmax << endl;
        cout << "偶数の最小値: " <<evenmin << endl;
    }else{
        cout << "偶数の最大値: データなし"  << endl;
        cout << "偶数の最小値: データなし"  << endl;
    }
    if(!odds.empty()){
        int oddmax = odds[0];
        int oddmin = odds[0];
        //奇数の最大値と最小値
        for (size_t i = 1; i < odds.size(); i++) {
            if(odds[i] > oddmax){
                oddmax = odds[i];
            }
            if(odds[i] < oddmin){
                oddmin = odds[i];
            }
        }
        cout << "奇数の最大値: "<< oddmax << endl;
        cout << "奇数の最小値: "<< oddmin << endl;
    }else{
        cout << "奇数の最大値: データなし" << endl;
        cout << "奇数の最小値: データなし" << endl;
    }
    cout << "偶数の合計: " << evensum     << endl;
    cout << "偶数の個数: " <<evens.size() << endl;
    cout << "奇数の合計: " << oddsum      << endl;
    cout << "奇数の個数: "<< odds.size()  << endl;

    return 0;
}