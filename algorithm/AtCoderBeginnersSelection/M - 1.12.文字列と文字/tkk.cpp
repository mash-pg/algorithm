#include <bits/stdc++.h>
using namespace std;

int main(void){
    string a;
    string b;
    cin >> a >> b;
    if(a.size() < b.size()){
        cout << b << endl;
    }else if(a.size() > b.size()){
        cout << a << endl;
    }
}