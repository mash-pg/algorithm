#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    int input;
    cin >> n;
    int array[n];
    for(int i = 0; i < n;i++){
        cin >> input;
        array[i] = input;
    }
    for(int i = n-1;i >= 0;i--){
        if(i != n -1) cout << " ";
        cout << array[i];
    }
    cout << endl;
    return 0;
}