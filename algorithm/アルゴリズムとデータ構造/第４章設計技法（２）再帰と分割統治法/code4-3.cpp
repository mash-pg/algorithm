#include "/home/mash/projects/algorithm/include/template.hpp"

int func(int n){
    //1からnまでの和を求める
    cout << "func(" << n << ")を呼び出しました" << endl;
    if(n == 0) return 0;
    //再帰的に答えを求めて出力する
    int result = n + func(n - 1);
    cout << "func(" << n << ")の答えは" << result << "です" << endl;
    return result;
}

int main(){
    int n;
    cin >> n;
    cout << func(n) << endl;
}