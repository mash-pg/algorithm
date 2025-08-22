#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    int n;
    cin >> n;
    int taro = 0;
    int hanako = 0;
    for (int i = 0; i < n; i++)
    {
        string t,h;
        cin >> t >> h;

        if (t > h)
        {
            taro += 3;
        }
        else if (t < h)
        {
            hanako += 3;
        }
        else
        {
            taro += 1;
            hanako += 1;
        }
    }
    
    cout << taro << " " << hanako << endl;
    

    return 0;
}