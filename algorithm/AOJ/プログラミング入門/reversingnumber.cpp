#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> a(n);

    for(int i = 0; i< n; i++){
        cin >> a.at(i);
    }
    for(int i = 1; i<= n;i++){
        if(i > 1){
            cout << " ";
        }
        cout << a.at(n - i);
    }
    cout << endl;


}