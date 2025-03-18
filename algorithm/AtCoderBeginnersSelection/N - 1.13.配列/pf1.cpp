#include <bits/stdc++.h>
using namespace std;

char a[100][101],b[102][102];

int main() {
    int H , W; 
    cin >> H >> W ;
    cout << endl;
    //a
    for ( int i = 0; i < H ; i ++){

        cin >> a[i];
        //scanf ("%s" , a [ i ]);
    }
    /*
    1列目#####
    2列目##### ←ここを追加する
    3列目##### ←ここを追加する
    
    */ 
    for ( int i = 0; i < H + 2 ; i ++){
        // cout << a[i] << endl;
        for ( int j = 0; j < W + 2 ; j ++)
            b [ i ][ j ] = '#';
    }
    // //0 1 2 3 ４回処理を行う
    // for (int i = 0; i < H+2; i++)
    // {
    //     //0 1 2 3 4 ５回処理を行う
    //     for (int j = 0; j < W+2; j++)
    //     {
    //         cout << b[ i ][ j ];
            
    //     }
    //     cout << endl;
    // }
    //0 1 ２回処理を行う
    for ( int i = 0; i < H ; i ++){
         //0 1 2 ３回処理を行う
        for ( int j = 0; j < W ; j ++)
            // (1,1)(1,2)(1,3)にそれぞれ値を入れる
            // (2,1)(2,2)(2,3)にそれぞれ値を入れる
            b[ i + 1][ j + 1] = a[ i ][ j ];
    }

    //出力
    for ( int i = 0; i < H + 2; i ++) {
        for ( int j = 0; j < W + 2; j ++)
            cout << b [ i ][ j ];
            cout << endl;
    }
}