#include "/home/mash/projects/algorithm/include/template.hpp"

//線形探索法
// input
// 3
// 3
// 1 2 3
//添え字を取得

int main(){
    ll N,v;
    cin >> N >> v;
    vl a(N);
    rep(i,N) cin >> a[i];
    ll found_id = -1;
    for(ll i = 0; i < N;++i){
        if(a[i] == v){
            found_id = i;
            break;
        } 
    }

    cout << found_id << endl;
}