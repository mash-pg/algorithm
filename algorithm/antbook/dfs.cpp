#include <iostream>
#include <algorithm>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>

using namespace std;
const long long MAX_N = 1000000;
long long n,k,a[MAX_N];

bool dfs(long long i, long long sum){
    if(i == n) return sum == k;
    if(dfs(i + 1 ,sum)) return true;

    if(dfs(i + 1,sum + a[i])) return true;

    return false;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n;i++) cin >> a[i];
    (dfs(0,0)) ? cout << "Yes" << endl : cout << "No" << endl;
}