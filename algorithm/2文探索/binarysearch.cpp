#include <bits/stdc++.h>
using namespace std;
/*
探索個数が奇数の場合 (n-1)/2
探索個数が偶数の場合 n/2 or (n/2)-1

https://qiita.com/Pro_ktmr/items/8946723fe08ba29a977c
*/

int N,A[1000000];

bool question(int m , int K){   

    return A[m] >=K;

}


int binarySearch(int K){
    int ng = -1;
    int ok = N;

    //cout << "Nの値 検索個数 :" << ok << endl;
    //cout << "検索対象のデータ :" << K << endl;
    
    while(ok - ng > 1) {
        //cout << "処理条件" << (ok -ng) << endl;
        int m = (ng + ok) / 2;
        //cout << "２分探索処理条件" << m << endl;
        if(question(m, K)) 
        {
            ok = m;
        }else{ 
            ng = m;
        }
    }
    return ok;
}

int main(void){
    cout << endl;
    cin >>N;
    //データの受取
    for(int i = 0; i<N;i++) cin >> A[i];
    //データの出力
    //for(int i = 0; i<N;i++) cout << A[i];

    int K;
    cin >> K;
    cout << binarySearch(K) << endl;

}