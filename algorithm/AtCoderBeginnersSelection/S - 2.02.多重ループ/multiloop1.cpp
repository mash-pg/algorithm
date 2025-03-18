#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(3), B(3);
  for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < 3; i++) {
    cin >> B.at(i);
  }

  bool answer = false;
  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if(A.at(i) == B.at(j) ){
        answer = true;
      }
    }
  }
  
  // ここにプログラムを追記

  if (answer) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
