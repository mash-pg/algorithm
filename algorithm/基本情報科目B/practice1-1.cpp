#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int cnt = 0;
    int num;
    cin >> num;
    string starColor = "SC1";
    while(cnt < num){
        if(starColor == "SC1"){
            cout << "☆" << endl;
            starColor = "SC2";
        }else{
            cout << "★" << endl;
            starColor = "SC1";
        }
        cnt = cnt + 1;
    }
}