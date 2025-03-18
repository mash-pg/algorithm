#include <iostream>
using namespace std;

int main(){
    int n;
    int m;
    int l;
    long data[110][110];
    long data1[110][110];
    long ans[110][110];
    //配列にデータ格納
    cin >> n >> m >> l;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> data[i][j];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> data1[i][j];
        }
    }

    //データの行列処理
    /*行列の掛け算処理
    url処理https://lab-brains.as-1.co.jp/enjoy-learn/2023/07/50258/

    cout << data[0][0] * data1[0][0] + data[0][1] * data1[1][0] << endl;
    cout << data[0][0] * data1[0][1] + data[0][1] * data1[1][1] << endl;
    cout << data[0][0] * data1[0][2] + data[0][1] * data1[1][2] << endl;
    cout << data[1][0] * data1[0][0] + data[1][1] * data1[1][0] << endl;
    cout << data[1][0] * data1[0][1] + data[1][1] * data1[1][1] << endl;
    cout << data[1][0] * data1[0][2] + data[1][1] * data1[1][2] << endl;
    cout << data[2][0] * data1[0][0] + data[2][1] * data1[1][0] << endl;
    cout << data[2][0] * data1[0][1] + data[2][1] * data1[1][1] << endl;
    cout << data[2][0] * data1[0][2] + data[2][1] * data1[1][2] << endl;
        n = 3
        m = 2
        l = 3
    */ 
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < m; k++)
            {   

                ans[i][j] += data[i][k] * data1[k][j];
            }
        }
    }
    //出力
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << ans[i][j];
            if(j!=l-1){
                cout << " ";
            }else{
                cout << endl;
            }
        }
    }
    return 0;
    
}