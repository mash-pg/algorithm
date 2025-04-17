#include "/home/mash/projects/algorithm/include/template.hpp"

int fibo(int n){
    cout << "fibo(" << n << ")を呼び出しました" << endl;
    //ベースケース
    if(n == 0) return  0;
    else if(n == 1) return  1;

    int result = fibo(n - 1) + fibo(n - 2);
    cout << n << " 項目 = " << result << endl;
    
    return result;
}

int main(){
    int n;
    cin >> n;
    fibo(n);

    return 0;
}