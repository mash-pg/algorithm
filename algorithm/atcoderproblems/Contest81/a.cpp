#include <iostream>
#include <vector>
using namespace std;

int main() {

    string s;
    cin >> s;
    int sum = 0;
    vector<int> arr;
    //文字列を配列としてあげる-0はご愛敬
    for (char c : s) {  // 文字列の各文字を処理
        arr.push_back(c - '0');  // '0' を引いて整数に変換
    }

    for (int i = 0; i < arr.size(); i++) {
        if(arr[i] == 0) {
            sum += 0;
        }
        if(arr[i] == 1) {
            sum += 1;
        }

        cout.flush();
    }
    cout << sum << endl;
    return 0;
}
