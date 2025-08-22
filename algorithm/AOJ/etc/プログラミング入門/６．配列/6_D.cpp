#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;


//ただの逆順
int main(){
    int n,m;
    cin >> n >>m;
    //n行m列の配列作成
    vector<vector<int>> a(n, vector<int>(m, 0));
    //1列m行の配列作成
    vector<int> b(m, 0);
    //行列の積の計算結果を格納する配列作成
    vector<int> result(n, 0);

    //行列の要素を入力
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a.at(i).at(j);
        }
    }
    for (int i = 0; i < m; i++)
    {
        cin >> b.at(i);
    }
    //行列の要素を出力
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            result[i] += a.at(i).at(j) * b.at(j);
            
        }
        cout << result[i] << endl;
    }    
    return 0;
    
}