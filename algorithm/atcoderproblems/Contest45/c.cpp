#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    vector<int> digits;
    // 文字列を数字に変換
    for (char c : s) {
        digits.push_back(c - '0');  // '1' → 49, '0' → 48 → 数字に変換
    }
    long long  n = digits.size();
    long long  total_sum = 0;
    long long  cnt = 0;
    for(int bit = 0; bit < (1 << n - 1); bit++) {
        long long  current_num = 0;
        long long  sum = 0;
        for (int i = 0; i < n; i++) {
            current_num = current_num * 10 + digits[i];
            if (bit & (1 << i)) {
                sum += current_num;
                current_num = 0;
            }
        }
        sum += current_num ; // 最後の残りも加算
        total_sum += sum;
        cnt++;
    }
    //cout << cnt << endl;
    cout << total_sum << endl;
    return 0;
}
