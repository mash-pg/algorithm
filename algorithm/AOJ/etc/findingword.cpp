#include <iostream>
#include <string>
#include <vector>
#include <cctype>  // tolower, isalpha
#include <bits/stdc++.h>
using namespace std;

string toLower(string& s){
    string lower  = s;
    transform(lower.begin(),lower.end(),lower.begin(),::tolower);
    return lower;
}

int main(){
    string w;
    cin >> w;
    w = toLower(w);  // 小文字に変換

    string line;
    int count = 0;
    cin.ignore();//1行目を飛ばす
    while(getline(cin,line)){
        if(line == "END_OF_TEXT") break;
        istringstream iss(line);
        string word;
        while(iss>>word){
            if (toLower(word) == w) {
                ++count;
            }
        }
    }
    cout << count << endl;
    return 0;
}