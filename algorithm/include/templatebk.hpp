#ifndef MY_TEMPLATE_HPP
#define MY_TEMPLATE_HPP

#include <iostream>
#include <vector>
// 多倍長整数
#include <boost/multiprecision/cpp_int.hpp>
#include <atcoder/all>
#define pb push_back
#define eb emplace_back
#define em emplace
#define pob pop_back
#define YES cout << "Yes" << endl;
#define NO cout << "No" << endl;
#define YN {cout << "Yes" << endl;} else {cout << "No" << endl;};
#define dame cout << -1 << endl;

#ifndef ONLINE_JUDGE
#define _GLIBCXX_DEBUG
#endif

namespace multip = boost::multiprecision; 

using namespace atcoder;
using namespace std;

using ll = long long;
using lll = multip::int128_t;
using ld = long double;
using P = pair<ll, ll>;
using mint = modint1000000007;

template<class T> using vc = vector<T>;
template<class T> using vv = vc<vc<T>>;
template<class T> using pq = priority_queue<T, vc<T>>;
template<class T> using pq_g = priority_queue<T, vc<T>, greater<T>>;

//配列の省略
using vl = vc<ll>; using vvl = vv<ll>; using vvvl = vv<vl>;  using vvvvl = vv<vvl>; 
using vs = vc<string>; using vvs = vv<string>;
using vld = vc<ld>; using vvld = vv<ld>; using vvvld = vv<vld>;
using vmint = vc<mint>; using vvmint = vv<mint>;using vvvmint = vv<vmint>; 

//for文の短縮
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

#endif // MY_TEMPLATE_HPP