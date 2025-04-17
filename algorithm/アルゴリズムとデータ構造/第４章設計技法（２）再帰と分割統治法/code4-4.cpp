#include "/home/mash/projects/algorithm/include/template.hpp"

//ユーグリッドの互除法
int GCD(int n,int m){
    //ベースケース
    if(m == 0) return n;
    cout << "GCD(" << n << "," << m << ")を呼び出しました" << endl;
    //再帰的に答えを求めて出力する
    return GCD(m,n % m);
}
int main(){
    int n,m;
    cout << "2つの整数を入力してください: ";
    cin >> n >> m;
    cout << GCD(n,m);
    return 0;
}