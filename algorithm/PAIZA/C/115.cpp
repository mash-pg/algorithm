#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n -1; i++)
    {
        cin >> a[i];
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++) {
        if(a[i] <= m){
            sum += a[i];
        }
    }
    cout << sum << endl;
    return 0;
}