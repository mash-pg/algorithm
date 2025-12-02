#include <iostream>
using namespace std;
int main(){
    int n;
    int x = 1;
    //一番書く書き方
    while ( cin >> n && n != 0) {
        cout << "Case " << x << ": " << n << endl;
        x++;
    }
    return 0;
}