#include "/home/mash/projects/algorithm/include/template.hpp";

int factorialFn(int n){
    /*
    input : 5
        n = 5 4 3 2 1
        factorialFn(5)
        factorialFn(4)
        factorialFn(3)
        factorialFn(2)
        factorialFn(1)
    */
    if(n == 0){
        return 1;
    }
    /*
        factorialFn(0) == 1
        factorialFn(1) = 1 * 1(factorialFn(0) == 1)
        factorialFn(2) = 2 * 1(factorialFn(1) == 1)
        factorialFn(3) = 3 * 2(factorialFn(2) == 2)
        factorialFn(4) = 4 * 6(factorialFn(3) == 6)
        factorialFn(5) = 5 * 24(factorialFn(4) == 24)
    return factorialFn(5) == 150
    */
    int recursion =  factorialFn(n - 1);
    return n * recursion;
}

int main(){

    int n = 0;
    cin >> n;
    cout << factorialFn(n) << endl;
}