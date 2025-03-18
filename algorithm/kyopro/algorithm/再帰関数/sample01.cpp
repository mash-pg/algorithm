#include <iostream>
using namespace std;

int result(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    return  result(n - 1);
}

int main(){
    int n = 50;
    cout << result(n);
    return 0;
}