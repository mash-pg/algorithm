#include "/home/mash/projects/algorithm/include/template.hpp"

//1 2 3 5 8 13 21 34 55 89 144


vector<long long> memo;

long long fibo(int n){
    if(n == 0 ) return 0;
    else if(n == 1) return 1;

    //メモをチェックする
    if(memo[n] != -1) return memo[n];

    //答えをメモ化しながら、再帰呼び出し
    return memo[n]  = fibo(n - 1) + fibo(n - 2);
}

int main(){
    //メモ化用配列をー１で初期化する。
    memo.assign(50,-1);

    cout << fibo(49);
    cout << endl;
    cout << "-------------------------" << endl;
    for(int n = 2;n < 50;++n){
        cout << n << " 項目 = " << memo[n] << endl;
    }

}