#include <iostream>
using namespace std;

int factorila(int n){
    if(n == 0 || n == 1){
        return 1;
    }
    int a = n * factorila(n - 1);
    return a;
}

int main(){
    int number = 5;
    int result = factorila(number);
    cout << number << "の階乗は：" << result << endl;
    return 0;
}