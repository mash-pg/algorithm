#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >>n;
    int cnt = 0;
    vector<int> to_solve;
    for (int i = 0; i < n; i++)
    {
        char a,b;
        cin >> a >> b;
        //1行目は、解かなければならない問題の数
        //2行目は、解かなければならない問題番号のうち
        if (!(a == 'y' && b == 'y'))
        {
            to_solve.push_back(i + 1);//問題番号は1から始まるので、i+1
        }
    }
    cout << to_solve.size() << endl;
    for (int i = 0; i < to_solve.size(); i++)
    {
        cout << to_solve[i] << endl;
    }
    return 0;

}