#include <bits/stdc++.h>
using namespace std;

int main(void){
    //alice
    vector<int> a(110);
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a.at(i);
    }
    sort(a.begin(),a.end());
    sort(a.rbegin(),a.rend());

    int A = 0;
    int B = 0;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 ==0){
            A += a.at(i);
        }else{
            B += a.at(i);
        }
    }

    cout << A - B << endl;
    return 0;
    
    

}