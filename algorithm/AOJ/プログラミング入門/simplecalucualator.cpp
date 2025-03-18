#include <bits/stdc++.h>
using namespace std;

int main(void){

    while(true){
        int a;
        string op;
        int b;
        cin >> a >> op >> b;
        if(op == "+"){
            cout << a + b << endl;
        }
        if(op == "-"){
            cout << a - b << endl;
        }

        if(op == "*"){
            cout << a * b << endl;
        }
        if(op == "/"){
            cout << a / b << endl;
        }
        if(op == "?"){
            break;
        }
    }
    return 0;

    

}