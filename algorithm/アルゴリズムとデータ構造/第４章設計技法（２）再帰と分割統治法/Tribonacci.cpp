#include "/home/mash/projects/algorithm/include/template.hpp"
//t0 + t1 + t2 + tn-1 + tn-2 + tn-3の場合
long long func(int n ,vector<ll>& memo){
    if(n == 0 || n == 1) return 0;
    if(n == 2) return 1;
    if(memo[n] != -1) return memo[n];


    return memo[n] = func(n-1,memo) + func(n-2,memo) + func(n-3,memo);
}

int main(){
    ll n;
    cin >> n;
    vector<ll> memo(100,-1);
    cout << "Tribonacci(" << n << ") = " << func(n, memo) << endl;
    return 0;
}