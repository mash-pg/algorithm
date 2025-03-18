#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,m;

    vector<string> s(110);
    vector<string> t(110);
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s.at(i);
    }
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        cin >> t.at(i);
    }
    //0点で初期化する
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        //s[i]を選んだ点数
        int score = 0;

        for (int j = 0; j < n; j++)
        {
            if(s.at(j)==s.at(i)) {
                score++;
            }

        }

        for (int j = 0; j < m; j++)
        {
            if(t.at(j)==s.at(i)) {
                score--;
            }
                
        }
        
        ans = max(ans,score);
        
    }
    cout << ans << endl;
    return 0;
}