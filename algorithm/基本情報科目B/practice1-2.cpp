#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;
void calcX(int inData){
    int num = inData;
    cout << "calcX : " << endl;
    for(int i = 1;i <= 4;i++){
        cout << num << " ";
        num = num + 2 * i;
    }
    cout << endl;
}
void calcY(int inData){
    int num = inData;
    cout << "calcY : " << endl;
    for(int i = 2;i <= 8; i += 2){
        cout << num << " ";
        num = num + 2 * i;
    }
    cout << endl;
}

int main(){
    int inData;
    cin >> inData;

    calcX(inData);
    calcY(inData);

    return 0;

}


