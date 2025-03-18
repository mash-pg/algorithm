#include <bits/stdc++.h>
using namespace std;

int main(void){
    double pie = 3.14159265359;
    double r;
    double circle;
    double circle2;
    cin >> r;

    circle =  2 *r * pie ;
    circle2 = r * r * pie;

    cout << fixed << setprecision(5) << circle2 << " " << circle << endl;
}