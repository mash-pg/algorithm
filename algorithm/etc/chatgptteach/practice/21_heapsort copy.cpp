#include <iostream>
#include <vector>
#include <queue>
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
#define ce cout << endl;

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

using vs = vc<string>;
using vvs = vv<string>;

using vld = vc<ld>;
using vvld = vv<ld>;
using vvvld = vv<vld>;

using vmint = vc<mint>;
using vvmint = vv<mint>;
using vvvmint = vv<vmint>;

// for 文の短縮
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define per(i, n) for (int i = (int)(n) - 1; i > 0; i--)

// C++20 以降で使えるラムダ関数版 rep
auto rep = [](int n, auto f) { for (int i = 0; i < n; i++) f(i); };


void heapify(vl& arr,int n,int i){
    int largest = i; // 一番大きいと思う場所
    int left = 2 * i + 1; // 左の子
    int right = 2 * i + 2; // 右の子

    if (left < n && arr[left] > arr[largest]) largest = left; // 左の子が大きければ更新
    if (right < n && arr[right] > arr[largest]) largest = right; // 右の子が大きければ更新

    if (largest != i) { // もし一番大きい値が親でなければ入れ替える
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest); // さらに下のすべり台も調整
    }
}

void heapSort(vl& arr){
    int n = arr.size();

    for(int i = n / 2 -1;i >= 0; i--) heapify(arr,n,i);
    
    per(i,n){
        swap(arr[0],arr[i]); 
        heapify(arr,i,0);
    }

}

int main(){
    vl arr = {11,59, 177, 59, 93};
    cout << "ソート前：";
    for ( int num : arr) cout << num << " ";
    ce;
    heapSort(arr);

    cout << "ソート後: ";
    for ( int num : arr) cout << num << " ";
    ce;

}
