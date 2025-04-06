#include "/home/mash/projects/algorithm/include/template.hpp"
/*
O(N^2) for文2回
*/
int main(){
    int N;
    cin >> N;
    
    for(int i= 2;i <= N; i +=2){
        cout << i << endl;
    }
}