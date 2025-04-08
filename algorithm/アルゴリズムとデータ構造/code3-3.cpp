#include "/home/mash/projects/algorithm/include/template.hpp"
const int INF = 200000000;

int main(){
    ll N;
    cin >> N;
    vl a(N);
    rep(i , N) cin >> a[i];
    int min_value = INF;
    rep(i,N) if(a[i] < min_value) min_value = a[i];

    cout << min_value << endl;

}