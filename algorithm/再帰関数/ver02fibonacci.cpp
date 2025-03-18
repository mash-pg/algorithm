#include <iostream>
#include <vector>
using namespace std;

int fibonacci(int n){
    if(n == 0) return 0;
    if(n == 1) return 1;
    int f = fibonacci(n - 1); 
    int f2 = fibonacci(n - 2);
    return f + f2;
}

int main(){
    int n;
    cin >> n;
    cout << "入力" << endl;
    cout << n << "番目： " << fibonacci(n) << endl;
    
}