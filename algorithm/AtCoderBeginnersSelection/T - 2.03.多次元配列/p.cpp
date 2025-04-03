#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    vvl data(3,vl(4));

    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 4; j++){
            cin >> data.at(i).at(j);
        }
    }

    ll cnt = 0;
    for(ll i = 0; i < 3; i++){
        for(ll j = 0; j < 4; j++){
            if(data.at(i).at(j) == 0){
                cnt++;
            }
        }
    }

    cout << cnt << endl;

}