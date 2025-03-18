#include <bits/stdc++.h>
using namespace std;

// 切り上げは、＋１すればよい

int main() {

    string s;
    cin >> s;

    int count_ones =  (s[0] == '1') + (s[1] == '1') + (s[2] == '1');

    cout << count_ones << endl;

    return 0;
}
