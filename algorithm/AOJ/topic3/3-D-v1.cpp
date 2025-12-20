#include <iostream>
using namespace std;
int main(){
    int a,b;
    int cnt = 0;
    cin >> a >> b;    
    for(int i=  a;i <= b;i++){
        cnt += i;
    }
    cout << cnt << endl;
    return 0; 
}