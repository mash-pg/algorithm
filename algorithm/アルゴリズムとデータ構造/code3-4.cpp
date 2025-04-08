#include "/home/mash/projects/algorithm/include/template.hpp"
const int INF = 200000000;
// N = 3
// K = 10
// (4,5,6)
// (1,2,9)
// なら３＋１０の中の数字を
// 足して最小の値を取得する。
// result = 4 + 9 = 13


int main(){
    ll N;
    ll K;
    cin >> N >> K;
    vl a(N),b(N);
    rep(i,N) cin >> a[i];
    rep(i,N) cin >> b[i];
    int min_value = INF;
    for(int i = 0; i < N;++i){
        for(int j = 0;j < N; ++j){
            //K未満な捨てる
            if(a[i] + b[j] < K) continue;
            //Kより上大きいなら足す
            if(a[i] + b[j] < min_value)
            min_value = a[i] + b[j]; 
        }        
    }

    cout << min_value << endl;

}