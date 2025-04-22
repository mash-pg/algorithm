#include "/home/mash/projects/algorithm/include/template.hpp"


vl binaryarray;

void toBinary(int n){
    if(n == 0) return;
    //cout << n/2 << endl;
    toBinary(n/2);
    cout << n % 2 << endl;
    binaryarray.push_back((n % 2));
}


int main(){

    int n;
    cin >> n;
    toBinary(n);
    cout << endl;
    for(auto b : binaryarray) {
        cout << b << endl;
    }
}