#include "/home/mash/projects/algorithm/include/template.hpp"
//列挙系

int main(){
    vector<char> a = {'a','b','c'};
    int N = a.size();
    int cnt = 0;
    for(int bit = 0; bit <(1 << N); bit++){
        cout << "[";
        for(int i=0;i<N;i++){
            if(bit  & (1<<i)){
                cout <<a[i];
            }
        }
        cout  << "]";
        cnt++;
        cout << endl;
    }
    cout << cnt << endl;
    return 0;
}