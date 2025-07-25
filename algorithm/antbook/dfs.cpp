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
    /**
     * i=深さを意味しています
     * k=求める値
     * n=中身の値の数
     * sum=これまでに選択した要素の合計値、つまり現在の「部分和」
     * a[MAX_N]=入力された数値の集合を格納する配列
     * 
    */
    // ベースケース（再帰の終了条件）
    if(i == n) return sum == k;

    // 分岐1: 現在の要素 a[i] を部分和に含めない場合
    if(dfs(i + 1 ,sum)) return true;

    // 分岐2: 現在の要素 a[i] を部分和に含める場合
    if(dfs(i + 1,sum + a[i])) return true;

    // どちらの分岐でもkが作れなかった場合
    return false;
}

int main(){
    cin >> n >> k;
    for(int i = 0; i < n;i++) cin >> a[i];
    (dfs(0,0)) ? cout << "Yes" << endl : cout << "No" << endl;
}