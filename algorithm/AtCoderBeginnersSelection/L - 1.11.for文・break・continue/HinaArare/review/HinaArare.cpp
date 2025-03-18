#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;

int main(){
    int N;
    cin >> N;
    set<char> s;

    for(int i =0;i<N;i++){
        char c;
        cin >> c;
        s.insert(c);
    }

    if(s.size() == 4){
        cout << "Four" << endl;
    }else{
        cout << "Three" << endl;
    }
}