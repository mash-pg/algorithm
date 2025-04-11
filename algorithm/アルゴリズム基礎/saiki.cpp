#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    //ダミーデータ「0」を作成する必要があるため、0を追加
    //1～6のため下記データになる。
    vl list = {0,21,5,53,71,3,17};
    ll n = list.size() -1;
    ll cnt = 0;
    for(ll i = 1; i <= n-1; i++){
        for(ll j = n; j >= i+1; j--){
            if(list[j - 1] > list[j]){
                swap(list[j - 1],list[j]);
                cnt++;
            }
        }
    }
    cout << "count : " << cnt << endl;
    for(ll i = 0; i < n; i++) cout << " " << list[i]; 
}