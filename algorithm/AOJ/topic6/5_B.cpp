#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    string input;
    int number;
    int suit;
    cin >> n;
    //２次元配列でいく
    int array[4][13] = {};
    for(int i = 0; i < n;i++){
        cin >> input >> number;
        if(input == "S")suit = 0;
        if(input == "H")suit = 1;
        if(input == "C")suit = 2;
        if(input == "D")suit = 3;
        array[suit][number-1] = 1;
    }
    for(int i = 0; i < 4;i++){
        for(int j = 0; j < 13;j++){
            if(array[i][j] == 0){
                if(i == 0) cout << "S" << " " << j+1 << endl;
                if(i == 1) cout << "H" << " " << j+1 << endl;
                if(i == 2) cout << "C" << " " << j+1 << endl;
                if(i == 3) cout << "D" << " "<< j+1 << endl;
            }
        }
    }
    return 0;
}