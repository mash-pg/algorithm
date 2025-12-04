#include <iostream>
#include <string>
using namespace std;

int main(){
    int a,b;
    string op;
    while(cin >> a >> op >> b && op != "?"){
        if(op == "+"){
            cout << a + b << endl;
        }else if (op == "-"){
            cout << a - b << endl; 
        }else if(op == "*"){
            cout << a * b <<endl;
        }else{
            cout << a / b << endl;
        }
    }
    return 0;
}