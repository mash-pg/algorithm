#include <bits/stdc++.h>
using namespace std;

int main(void){

    vector<int> vec = {1,5,3};

    //配列の最初と最後のデータ入れ替え
    reverse(vec.begin(),vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << endl;
    }
    
}