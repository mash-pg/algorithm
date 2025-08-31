#include <iostream>
#include <vector>

using namespace std;

int main(){
    int col;
    int row;
    cin >> col >> row;

    if(col == row){
        cout << "正方形";
    }else{
        cout << "長方形";
    }
    return 0;
}