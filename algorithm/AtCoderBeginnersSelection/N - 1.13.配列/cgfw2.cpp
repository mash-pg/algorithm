#include <bits/stdc++.h>
using namespace std;

int main(void){
    //alice
    vector<int> a(110);
    int n;
    cin >> n;
    int max = 0;

    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }

    //ソート処理
    for (int i = 0; i < n; i++)
    {
        if(a.at(i) > max){
            max = a.at(i);
        }
    }
    cout << max;
}