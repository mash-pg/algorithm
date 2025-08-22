#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int a ,b;
    cin >> a >> b;
    int area = a * b;
    int round = 2 * (a + b);
    cout << area << " " << round << endl;

    return 0;
}