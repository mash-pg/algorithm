#include <bits/stdc++.h>
using namespace std;

int main(void){
    string s;
    
    cin >> s;
    int last = s.size()-1;
    if(s.at(last) == 'T'){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}