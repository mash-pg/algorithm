#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void printDigits(int n,bool isFirst = true){
    if(n < 10) {
        cout << n;
        return;
    }
    printDigits(n/10,false);
    cout << " " << n % 10;
}

int main(){
    int n;
    cin >> n;
    cout << n << endl;

    printDigits(n);
    cout.flush();
    cout << endl;

    return 0;
}