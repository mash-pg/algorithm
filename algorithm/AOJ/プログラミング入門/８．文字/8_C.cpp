#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
/*
cntl + D　で終了する
*/
int main(){
    vector<int> count(26,0);
    string line;

    while (getline(cin,line))
    {
        for (char c : line)
        {
            if(isalpha(c)) // cがアルファベットかどうか
            {
                c = tolower(c); 
                count[c - 'a']++;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        cout << char('a' + i) << " : " << count[i] << endl;
    }

    
    return 0;
    
}