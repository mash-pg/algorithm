#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    int s;
    cin >> s;
    //時間
    int h1 = s/ (60 * 60);
    int m1 = (s - (h1 * 60 * 60))/60;
    int s1 = s % 60;
    cout << h1 << ":" << m1 << ":" << s1 << endl;
    return 0;
}