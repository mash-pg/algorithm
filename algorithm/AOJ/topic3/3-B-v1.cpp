#include <iostream>
using namespace std;
int main(){
    int n;
    int x = 1;
    cin >> n;   // ← 最初に読む
    while (n != 0) {
        cout << "Case " << x << ": " << n << endl;
        x++;
        cin >> n;   // ← 次の数字を読む
    }
    return 0;
}