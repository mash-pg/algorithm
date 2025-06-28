#ifndef MY_TEMPLATE_HPP
#define MY_TEMPLATE_HPP

#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>  // これをインクルード！
#include <cmath>
// 多倍長整数
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>

#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG // デバッグ用（オンラインジャッジでは無効）
#endif

// マクロ定義（セミコロン削除・安全な形式）
#define pb push_back
#define eb emplace_back
#define em emplace
#define pob pop_back
#define YES do { cout << "Yes" << endl; } while (0)
#define NO do { cout << "No" << endl; } while (0)
#define YN { cout << "Yes" << endl; } else { cout << "No" << endl; }
#define dame do { cout << -1 << endl; } while (0)
//改行処理
#define ce cout << endl;
//Map追加
#define myM std::unordered_map<std::string, int> myMap
// 名前空間
namespace multip = boost::multiprecision;
using multip::cpp_int;

using namespace atcoder;
using namespace std;

// 型エイリアス
using ll = long long;
using lll = multip::int128_t;
using ld = long double;
using P = pair<ll, ll>;
using mint = modint1000000007;

// テンプレート型エイリアス
template<class T> using vc = vector<T>;
template<class T> using vv = vc<vc<T>>;
template<class T> using pq = priority_queue<T, vc<T>>;
template<class T> using pq_g = priority_queue<T, vc<T>, greater<T>>;

// 配列のエイリアス
using vl = vc<ll>;
using vvl = vv<ll>;
using vvvl = vv<vl>;
using vvvvl = vv<vvl>;

using vi = vc<int>;
using vvi = vv<int>;
using vvvi = vv<vi>;
using vvvvi = vv<vvi>;

using vs = vc<string>;
using vvs = vv<string>;
using vvvs = vv<vs>;

using vchar = vc<char>;
using vvchar = vv<char>;
using vvvchar = vv<vchar>;

using vld = vc<ld>;
using vvld = vv<ld>;
using vvvld = vv<vld>;

using vmint = vc<mint>;
using vvmint = vv<mint>;
using vvvmint = vv<vmint>;

// for 文の短縮
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define per(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
// C++20 以降で使えるラムダ関数版 rep
auto rep = [](int n, auto f) { for (int i = 0; i < n; i++) f(i); };
#endif // MY_TEMPLATE_HPP
#define arrn(arr) (sizeof(arr) / sizeof(arr[0]))



int fib(int n){
    vl dp(n+1);
    dp[0] = 0;
    dp[1] = 1;
    for (int i = 2;i<=n;i++){
        dp[i] = dp[i - 1] + dp[i-2];
    }
    return dp[n];
}

int main() {
    int n;
    cin >> n;
    cout << fib(n) << endl;
    return 0;
}