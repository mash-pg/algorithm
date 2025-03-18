#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> vec = {2,5,2,1};
    //昇順の並び替え
    sort(vec.begin(),vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << endl;
    }
    

}