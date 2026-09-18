//#include "/home/mash/projects/algorithm/include/template.hpp"
#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

// 最小値：-2147483648
// 最大値：2147483647
int test1(){
    cout << "test1関数処理だよ～" << endl;
    int a = 2000000000;
    int b = a * 2;
    cout << b << endl;
    // 最小値：-2147483648が出力されてしまう。
    int c = (a * 10 + 100)/100;
    //a * 10ここの次点でオーバーフローされる
    cout << c << endl;
    return 0;
}

int test2(){
    cout << "test2関数処理だよ～" << endl;
    int64_t a = 2000000000;
    int64_t b = a * 2;
    cout << b << endl;
    int64_t c = (a * 10 + 100)/100;
    cout << c << endl;
    return 0;
}

int test3(){
    cout << "test3関数処理だよ～" << endl;
    cout << 2000000000 * 2 << endl; // int * int -> int
    cout << 2000000000LL * 2LL << endl; // int64_t * int64_t -> int64_t
    cout << 2000000000LL * 2 << endl; // int64_t * int -> int64_t
    return 0;
}

int test4(){
    cout << "test4関数処理だよ～" << endl;
    cout <<  3.14159265358979  << endl;
    cout << fixed << setprecision(10);
    cout <<  3.14159265358979 << endl;
    return 0;
}

int test5(){
    cout << "test5関数処理だよ～" << endl;
    cout << fixed << setprecision(5);
    int a = 5;
    cout << (double) a << endl;
    double b = 3.141592;
    cout << (int) b << endl;
    return 0;
}


//オーバーフローは、計算の途中で扱える範囲を超えることを言います
//int型より大きい値を扱いたい場合はint64_t型を使います
//double型の値を出力する際に出力する小数点以下の桁数を指定するには以下のようにすうｒ
int main(){
    cout << fixed << setprecision(8);
    test1();
    test2();
    test3();
    test4();
    test5();
}

