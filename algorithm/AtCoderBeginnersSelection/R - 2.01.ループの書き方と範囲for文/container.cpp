#include <bits/stdc++.h>
using namespace std;

int main() {
    string str = "hello";

    for(char c :str){
        if (c == 'l')
        {
            c = 'L';
        }

        cout << c;
        
    }
    cout << endl;
}
