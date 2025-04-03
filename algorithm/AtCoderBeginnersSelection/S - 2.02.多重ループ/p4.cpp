#include "/home/mash/project/algorithm/algorithm/include/template.hpp"


int main() {
  ll N, S;
  cin >> N >> S;
  vector<ll> A(N), P(N);
  for (ll i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  for (ll i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  ll cnt = 0;
  for (ll i = 0; i < N; i++) {
    for (ll j = 0; j < N; j++) {
      if(A.at(i) + P.at(j) == S){
        cnt += 1;
      }
    }
  }

  cout << cnt << endl;
}