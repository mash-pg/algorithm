#include "/home/mash/projects/algorithm/include/template.hpp"

//線形探索法
// input
// 3
// 3
// 1 2 3

int main(){
    ll N,v;
    cin >> N >> v;
    vl a(N);
    for(ll i = 0; i < N;++i) cin >> a[i];
    bool exist = false;
    for(ll i = 0; i <N;++i){
        if(a[i] == v) {
            exist = true;
        }
    }

    if(exist) cout << "Yes" << endl;
    else cout << "No" << endl;

}