#include <bits/stdc++.h>
using namespace std;

int main() {
    int H , W; 
    cin >> H >> W ;
    vector<string> a(H);
    vector<vector<string>> b(H+2, vector<string>(W+2));

    for (int i = 0; i < H; i++)
    {
        cin >> a.at(i);
    }
    for (int i = 0; i < H+2; i++)
    {
        for (int j = 0; j < W+2; j++)
        {
            b.at(i).at(j) ="#";
        }
        
    }
    for ( int i = 0; i < H ; i ++)
        for ( int j = 0; j < W ; j ++)
             b.at(i + 1).at(j + 1) = a.at(i).at(j);

             
    for ( int i = 0; i < H + 2; i ++) {
        for ( int j = 0; j < W + 2; j ++)
            cout << b.at(i).at(j);
            cout << endl ;
    }
}