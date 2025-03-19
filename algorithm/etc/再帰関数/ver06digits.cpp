#include <iostream>
#include <vector>
using namespace std;

void printDigits(int n, bool isFirst = true) {
    if (n < 10) { // 最後の1桁になったら出力
        cout << n;
        return;
    }
    printDigits(n / 10, false);  // 再帰的に処理
    cout << " " << n % 10; // 空白を正しく挿入
}

int main() {
    int n;
    cout << "整数を入力：";
    cin >> n;

    cout << "逆の合計：";
    printDigits(n);
    cout << endl;

    return 0;
}
