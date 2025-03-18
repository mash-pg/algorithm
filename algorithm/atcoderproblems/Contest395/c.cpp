#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n); // ✅ サイズnのvectorを確保
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // ✅ 配列の範囲内で代入
    }
    
    for(int i = 0; i < n; i++) {
        cout << arr[i] << endl;
    }

    return 0;
}
