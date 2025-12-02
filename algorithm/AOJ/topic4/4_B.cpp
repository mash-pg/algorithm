#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    double r;
    cin >> r;
    double area;
    double circle;
    area = M_PI  * r *r;
    circle = M_PI  * 2 * r;
    cout << fixed << setprecision(6) << (double)area << endl;
    cout << fixed << setprecision(6) << (double)circle << endl;
}