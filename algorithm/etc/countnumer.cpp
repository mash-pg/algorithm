#include <iostream>
using namespace std;
using ll = long long;

const ll MOD = 1e9 + 7;

// 2の逆元（MOD上で割り算するために使う）
ll mod_pow(ll a, ll b, ll m) {
    ll res = 1;
    a %= m;
    while (b > 0) {
        if (b & 1) res = res * a % m;
        a = a * a % m;
        b >>= 1;
    }
    return res;
}

// 等差数列の和 (a + a+1 + ... + b) を MOD付きで計算
ll sum(ll a, ll b) {
    ll n = (b - a + 1) % MOD;             // 項数
    ll total = (a % MOD + b % MOD) % MOD; // 初項 + 末項
    return n * total % MOD * mod_pow(2, MOD - 2, MOD) % MOD;
}

int main() {
    ll L, R;
    cin >> L >> R;

    ll ans = 0;
    ll ten = 1;

    for (int digit = 1; digit <= 19; ++digit) {
        ll lo = max(L, ten);
        ll hi = min(R, ten * 10 - 1);
        if (lo > hi) {
            ten *= 10;
            continue;
        }

        // [lo, hi] の範囲の合計を求めて、桁数をかける
        ll s = sum(lo, hi);
        ans = (ans + s * digit % MOD) % MOD;

        ten *= 10;
    }

    cout << ans << endl;
    return 0;
}
