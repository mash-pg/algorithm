#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    //数字が3つ並んでいたらYesそれ以外は、No
    for(int i = 0; i < n-2; i++){
        if(a[i] == a[i+1] && a[i+1] == a[i+2]){
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
} 