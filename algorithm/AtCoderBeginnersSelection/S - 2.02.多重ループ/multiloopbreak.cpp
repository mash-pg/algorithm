#include <bits/stdc++.h>
using namespace std;

int main() {
  int sum = 0;
  bool finished = false;

  for (int i = 0; i < 10 ; i++) {
    for (int j = 0; j < 10 ; j++) {

      sum += i * j;

      if (sum > 1000) {
        cout << i << ", " << j << endl;
        finished = true;
        break;
      }
    }

    if (finished) {
      break;
    }
  }

  cout << sum << endl;
}
