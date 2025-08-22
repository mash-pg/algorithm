#include <bits/stdc++.h>
using namespace std;

int main(void){
    int S;
    int h = 0;
    int m = 0;
    int s = 0;
    cin >> S;

    h = S/60/60;
    m = (S%3600)/60;
    s = (S%3600)-(m*60);
    cout << h << ":" << m << ":" << s << endl;
    
    

}