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

// or 文の短縮
#define rep(j, n) for (int i = 0; i < (int)(n); i++)
#define per(i, n) for (int i = (int)(n) - 1; i >= 0; i--)
// C++20 以降で使えるラムダ関数版 rep
auto rep = [](int n, auto f) { for (int i = 0; i < n; i++) f(i); };
#endif // MY_TEMPLATE_HPP
#define arrn(arr) (sizeof(arr) / sizeof(arr[0]))

const int MOD = 1000000007;
int main(){
    /*
    W:Width
    H:High
    R:Rihgt
    D:Down
    
    */
    int H,W;
    cin >> H >> W;
    vector<string> grid(H);
    for(int i = 0; i< H;i++) cin >> grid[i];
    
    vvl dp(H,vl(W,0));
    vvchar from(H,vchar(W,'-'));

    if(grid[0][0] == '.') dp[0][0] = 1;

    for(int i = 0; i < H;i++){
        for (int j = 0; j < W; j++)
        {
            if(grid[i][j] == '#') continue;
            if(i > 0 && grid[i - 1][j] == '.' && dp[i - 1][j] > 0) {
                //列の上から下の順にdp配列に格納する
                dp[i][j] = (dp[i][j] + dp[i - 1][j]) % MOD;
                from[i][j] = 'D';
            }
            if(j > 0 && grid[i][j - 1] == '.' && dp[i][j - 1] > 0) {
                //行の左から右の順にdp配列に格納する
                dp[i][j] = (dp[i][j] + dp[i][j - 1]) % MOD;
                //整合性を保つために辞書順にR優先にしている
                if (from[i][j] == '-' || from[i][j] > 'R')
                    from[i][j] = 'R';
            }
        }
        
    }

    //復元フェーズ
    string path;
    int i = H - 1;
    int j = W -1;
    if(dp[i][j] == 0){
        cout << "No path\n";
        return 0;
    }

    while (i != 0 || j != 0) {
        if (from[i][j] == 'D') {
            path += 'D';
            i--;
        } else if (from[i][j] == 'R') {
            path += 'R';
            j--;
        } else {
            break;
        }
    }
    reverse(path.begin(), path.end());
    cout << "number of paths："<< dp[H-1][W-1] << endl;
    cout << "Path：" << path << endl;
    return 0;

}