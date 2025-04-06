#include "/home/mash/projects/algorithm/include/template.hpp"

bool is_prime(int n){
    if(n <= 1) return false;
    for(int p = 2; p * p  <= n;++p){
        if(n % p == 0) return false;
    }
}

int main(){
    int N;
    cin >> N;
    cout << is_prime(N);
}