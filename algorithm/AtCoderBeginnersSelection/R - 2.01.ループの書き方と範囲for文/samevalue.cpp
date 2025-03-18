#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> data(110);
    for (int i = 0; i < 5; i++) {
        cin >> data.at(i);
    }

    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        if(data.at(i) == data.at(i+1)){
            ++count;
        }

    }

    if(count > 0){
        cout << "YES"<< endl;
    }else if(count == 0){
        cout << "NO" << endl;
    }
    

}
