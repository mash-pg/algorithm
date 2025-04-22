#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    int n;
    cin >> n;
    if(n >= 0 && n < 2){
        cout << "clear" << endl;
    }else if(n < 9 && n >= 2 ){
        cout << "sunny" << endl;
    }else if(n >= 9 && n <= 10){
        cout << "cloudy" << endl;
    }
    return 0;
}