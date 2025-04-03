#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
  ll N,M = 0;
  cin >> N >> M;
  vl A(M), B(M);

  for(ll i = 0; i < M; i++){
    cin >> A.at(i) >> B.at(i);
  }
  vvchar data(N,vchar(N,'-'));

  //処理
  for(ll i = 0; i < M; i++){
    A.at(i)--; B.at(i)--;//インデックスをそろえる必要が 0,1,2なので
    data.at(A.at(i)).at(B.at(i)) ='o';
    data.at(B.at(i)).at(A.at(i)) ='x';
  }

  //出力
  for(ll i = 0; i < N; i++){
    for(ll j = 0; j < N; j++){
      cout << data.at(i).at(j);
      if(j != N -1) cout << " ";
    }
    cout << endl;
  }

}