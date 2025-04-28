#include <iostream>
#include <vector>
#include <set>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> arrived;

    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        arrived.insert(x);
    }

    int dame = 0;

    for (int i = 1; i <= n; ++i)
    {
        if (arrived.count(i) == 0)
        {
            dame++;
        }
    }

    cout << dame << endl;

    return 0;
}