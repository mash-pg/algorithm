#include <bits/stdc++.h>
using namespace std;
// C:\Users\user\OneDrive\デスクトップ\atcoder\Counting Roads に処理の詳細記載
int n;

int main(){

    vector<int> k(110);
    int max = k.size();
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> k.at(i);
    }

    //重複のデータをなくして昇順にする。
    sort(k.begin(),k.end());
    k.erase( unique(k.begin() , k.end()) , k.end());
    k.erase(k.begin());
    
    // for (int i = 0; i < k.size(); i++)
    // {
    //     cout << k.at(i) << endl;
    // }
    
    cout << k.size();
    
}