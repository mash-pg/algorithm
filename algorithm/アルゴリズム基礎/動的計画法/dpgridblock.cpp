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

// 💬 問題文：
// H×W のマス目があり、左上 (0,0) から右下 (H-1,W-1) に移動します。
// 1回で 右 または 下 に1マス進めます。
// ただし、一部のマスには障害物（'#'）があって通れません。
// 右下まで行く 通り数 を mod 1000000007 で求めてください。


const int MOD = 1000000007;

int main() {
    int H,W;
    cin >> H >> W;
    vvs grid(H,vs(W));
    //配列にデータを格納
    rep(i,H){
        string row;
        cin >>row;
        rep(j,W) {
            grid[i][j] = row[j];
        }
    }
    //dp初期設定
    vvl dp(H,vl(W,0));

    //スタート地点
    if(grid[0][0] == ".") dp[0][0] = 1;

    //縦と横のデータを処理していく
    for(int i = 0; i< H;i++){
        for(int j = 0; j < W;j++){
            //行き止まりがあったらスキップ
            if (grid[i][j] == "#") continue;
            //iが0だと
            if(i > 0){
                dp[i][j] += dp[i - 1][j];
                dp[i][j] %= MOD;  
            }
            if(j > 0){
                dp[i][j] += dp[i][j - 1];
                dp[i][j] %= MOD; 
            }
        }
    }
    //ゴールの地点を見つける
    cout << dp[H - 1][W - 1] << endl;
    return 0;
}