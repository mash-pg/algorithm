#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>
using namespace std;

int main(){
    
    string S;
    cin >> S;
    int N = S.size();

    //上記文字を+で囲う
    for (int i = 0; i < N + 2; i++)
    {
        cout << "+";
    }
    cout << endl;

    cout << "+" << S << "+";

    cout << endl; 
    for (int i = 0; i < N + 2; i++)
    {
        cout << "+";
    }

    return 0;

}