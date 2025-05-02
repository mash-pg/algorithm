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
    int n;
    cin >> n;
    int b,f,r,v;
    //建物全体を表す3次元配列作成
    vector<vector<vector<int>>> house(4, vector<vector<int>>(3, vector<int>(10, 0)));
    //建物の部屋の数を表す配列作成

    for (int i = 0; i < n; i++)
    {
        cin >> b >> f >> r >> v;
        //建物の部屋の数を表す配列作成
        house.at(b-1).at(f-1).at(r-1) += v;
    }
    //建物の部屋の数を表す配列作成  
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 10; k++)
            {
                cout << " " << house.at(i).at(j).at(k);

            }
            cout << endl;
        }
        if(i != 3) cout << "####################" << endl;
    }
    return 0;
    
}