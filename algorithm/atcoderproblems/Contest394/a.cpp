#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    vector<string> v;
    for (size_t i = 0; i < s.length(); i++)
    {
        if(s[i] == '2'){
            v.push_back("2");
        }
    }
    for (size_t i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    
    return 0;
}