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
    vector<long long> a(100);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    //逆順に出力
    for (int i = n - 1; i >= 0; i--)
    {
        cout << a[i];
        (i != 0) ? cout << " " : cout << endl;
    }
    return 0;
    
}