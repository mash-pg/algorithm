#include <bits/stdc++.h>
#include <atcoder/dsu>
#include <cstdio>
#include <iostream>
#include <string>
#include <queue>

using namespace std;
using namespace atcoder;

/*
問題文
日本では、
3 月 3 日にひなあられという、色のついたお菓子をお供えする習慣があります。

1 つの袋があり、ひなあられが N 個入っています。

この袋には、桃色、白色、緑色の 3 種類か、桃色、白色、緑色、黄色の 
4 種類のひなあられが入っていることが分かっています。

桃色を P、白色を W、緑色を G、黄色を Y と表したとき、袋からひなあられを 1 粒ずつ取り出していったところ、
i 番目に取り出したひなあられの色は S(i)でした。

この袋に 
3 種類のひなあられが入っていた場合は Three、
4 種類のひなあられが入っていた場合は Four と出力してください。

insertは、重複を許さない。
insertが利用できるのは、setのみ
*/

int main() {

    int N;
    cin >> N;
    set<char> s;
    for(int i =0; i< N;i++){
        char c;
        cin >> c;
        s.insert(c);
    }

    if(s.size() == 3){
        cout << "Three" << endl;
    }else{
        cout << "Four" << endl;
    }
}