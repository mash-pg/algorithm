#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n,m,l;
    cin >> n >> m >> l;
    //配列2つ固定
    //空を作成
    vector<vector<long long>> tableA(n, vector<long long>(m, 0));
    vector<vector<long long>> tableB(m, vector<long long>(l, 0));
    //結果の行列を作る
    vector<vector<long long>> resulttable(n, vector<long long>(l, 0));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> tableA[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cin >> tableB[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            for (int k = 0; k < m; k++)
            {
                resulttable[i][j] += tableA[i][k] * tableB[k][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < l; j++)
        {
            cout << resulttable[i][j];
            if (j != l - 1) cout << " ";
        }
        cout << endl;
    }
    return 0;
}
