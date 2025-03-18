#include <bits/stdc++.h>
using namespace std;
// C:\Users\user\OneDrive\デスクトップ\atcoder\Counting Roads に処理の詳細記載

int main(){
    int n,m;
    cin >> n >> m;
    int mmax = 50;
    
    vector<int> a(mmax);
    vector<int> b(mmax);

    for(int i = 0;i<m; i++){
        cin >> a.at(i) >> b.at(i);
    }
    vector<int> road(mmax);
    for(int i =0;i<n;i++){
        road.at(i) =0;
    }
    //6回の処理が動く
    for(int i =0;i<m;i++){
        road.at(a.at(i) -1) += 1;
        road.at(b.at(i) -1) += 1;
    }

    for(int i =0;i<n;i++){
        cout << road.at(i) << endl;
    }

    return 0;
}