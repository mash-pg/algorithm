#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 7;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //配列のaの中の各要素の出現回数を数えるて格納する
    map<int,int> freq;
    for (int x:a) {
        freq[x]++;
    }
    bool ok = false;
    for (auto [x, cnt_x] : freq) {
        if (cnt_x >= 3) {
            // xを3枚として、それ以外に2枚があるかチェック
            for (auto [y, cnt_y] : freq) {
                if (x != y && cnt_y >= 2) {
                    ok = true;
                }
            }
        }
    }
    
    cout << (ok ? "Yes" : "No") << endl;

    return 0;
}