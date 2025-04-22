#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*
cntl + D　で終了する
*/
int main(){
    string s;
    string p;
    cin >> s >> p;
    string s1 = s + s;
    (s1.find(p) != string::npos)? cout << "Yes"  : cout << "No";
    cout << endl;
    return 0;
    
}