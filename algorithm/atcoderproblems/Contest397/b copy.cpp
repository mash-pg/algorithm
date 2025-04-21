#include <bits/stdc++.h>
using namespace std;
/*
偶数の箇所にi
奇数の箇所にo
*/
int main(){

    string s;
    cin >> s;
    int pos = 0;
    size_t i = 0;
    int ans = 0;
    while(i < s.size()){
        char expected = (pos % 2 == 0) ? 'i' : 'o';
        if(s[i] == expected){
            ++i;
        }
        ++pos;
    }

    if(pos % 2 != 0) pos++;
    ans = pos - s.size();
    cout << ans << endl;

    return 0;

}
