#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;
    int mat[100][100] = {{}};
    int vec[100] = {};
    cin >> n >> m;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> vec[i];
    }

    for (int i = 0; i < n; i++)
    {
        int x = 0;
        for (int j = 0; j < m; j++)
        {
            //
            x += mat[i][j] * vec[j];
        }
        //処理が終了したら出力して改行する。
        cout << x << endl;
    }

    return 0;
}