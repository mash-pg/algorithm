#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    string t;
    cin >> s >> t;
    int cnt = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (s[i] != t[i]) {
            cnt += 1;
        }
    }
    
    cout << cnt << endl;

    return 0;
}