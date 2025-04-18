#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n,d;
    cin >> n >> d;
    vector<int> a(n);
    for (int i = 1; i < n; i++)
    {
        cin >> a[i];
    }
    int yoko = 0;
    for (int i = 1; i < n; i++)
    {
        //d - a[i]
        //cout << d - a[i] << " ";
        yoko += (d - a[i]);
    }
    cout << d*(yoko + d) << endl;
    
    return 0;
}