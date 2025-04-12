#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    vl list = {0,21,5,53,71,3,17};
    ll n = list.size() - 1;
    //バブルソートは、隣会うデータを比較してソートする
    for(ll i = 1; i <= n -1;i++){
        //隣合わせの処理
        for(ll j = n; j >= i + 1;j--){
            //隣合わせが左が大きい場合は、交換する
            if(list[j - 1] > list[j]) swap(list[j - 1],list[j]);
        }
    }
    rep(i,n) cout << " " << list[i];
}