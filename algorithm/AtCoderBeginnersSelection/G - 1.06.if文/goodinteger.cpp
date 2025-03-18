#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;

int main() {

    char s[5];
    cin >> s;

    if(s[0] == s[1] && s[1] == s[2]){
        cout << "Yes" << endl;
    }else if(s[1] == s[2] && s[2] == s[3]){
        cout << "Yes" << endl;
    }else {
        cout << "No" << endl;
    }


}
