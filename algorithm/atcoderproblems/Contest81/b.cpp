#include <iostream>
#include <vector>
using namespace std;

// それぞれの偶数の値が奇数になるまでを計算してその奇数になった回数が少ないものを出力する

int main() {
    int n;
    cin >> n;
    
    vector<int> arr(n); 
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    int min_div_count = 1e9; // 十分大きい値で初期化

    // 各要素が何回 2 で割れるかをカウント
    for (int i = 0; i < n; i++) {
        int count = 0;
        int num = arr[i];

        while (num % 2 == 0) { // 2で割れる限りカウント
            num /= 2;
            count++;
        }

        min_div_count = min(min_div_count, count); // 最小値を更新
    }

    cout << min_div_count << endl; // すべての数が割れる最大回数を出力
    return 0;
}
