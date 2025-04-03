#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    vl A(3),B(3);
    for(ll i = 0; i < A.size();i++){
        cin >> A.at(i);
    }
    for(ll i = 0; i < B.size();i++){
        cin >> B.at(i);
    }

    bool answer = false;
    
    for(ll i = 0; i < A.size();i++){
        for(ll j = 0; j < B.size();j++){
            if(A.at(i) == B.at(j)){
                answer = true;
            }
        }
    }
    
    if(answer){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    
}