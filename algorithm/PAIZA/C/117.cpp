#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    int a,b,c;
    cin >> a >> b >> c;
    vector<int> v(n);
    vector<int> r(n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        r[i] = ((v[i] * c) - a) - (b * m);
    
    }

    for (int i = 0; i < r.size(); i++)
    {
        if(r[i] < 0)
        {
            cnt++;
        }
    }
    
    cout << cnt << endl;

    return 0;

}