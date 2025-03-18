#include <bits/stdc++.h>
using namespace std;

int main(void){
    int a;
    int b;
    cin >>a >>b;

    int d = a/b;
    int r = a%b;
    double  a1 = a;
    double f = (double)a/b;
    cout << d << " " << r << " " <<  fixed << setprecision(6) << f << endl;

}