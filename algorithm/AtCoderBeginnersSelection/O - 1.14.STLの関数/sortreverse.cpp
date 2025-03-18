#include <bits/stdc++.h>
using namespace std;

int main(void){
    vector<int> vec = {2,5,2,1};
    //降順の並び替え
    sort(vec.begin(),vec.end());
    reverse(vec.begin(),vec.end());
    //重複削除
    // vec.erase(std::unique(vec.begin(), vec.end()), vec.end());

    for (int i = 0; i < vec.size(); i++)
    {
        cout << vec.at(i) << endl;
    }
    

}