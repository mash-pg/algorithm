#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    long long total_sum = 0;

    for (int bit = 0; bit < (1 << (n - 1)); ++bit) {
        long long current_num = 0;
        long long sum = 0;

        for (int i = 0; i < n; ++i) {
            current_num = current_num * 10 + (s[i] - '0');

            // + を入れる位置かどうか
            if (bit & (1 << i)) {
                sum += current_num;
                current_num = 0;
            }
        }

        sum += current_num;  // 最後に残った数字も加算
        total_sum += sum;
    }

    cout << total_sum << endl;
    return 0;
}
