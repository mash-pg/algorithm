#include "/home/mash/projects/algorithm/include/template.hpp"
/*
O(N^2) for文2回
*/
int main(){
    int N;
    cin >> N;
    
    int count = 0;
    for(int i = 0; i < N; ++i){
        for(int i = 0; i < N;++i){
        ++count;
        }
    }
    cout << count << endl;
}