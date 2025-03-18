#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    n = 101010;
    vector<int> a(101010);
    cin >> n;
    //配列にデータを格納する
    for(int i = 1;i<= n;i++){
        cin >> a.at(i);
    }
    int cur = 1;

    for (int i = 0; i < a.size(); i++)
    {
        cur = a.at(cur);
        if(cur == 2){
            cout << i + 1 << endl;
            return 0;
        }

        int a = 1;
    }

    cout << -1 << endl;
}