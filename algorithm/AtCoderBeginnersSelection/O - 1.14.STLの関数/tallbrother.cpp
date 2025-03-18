#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    int mini =  min(min(A,B),C);
    int maxim =  max(max(A,B),C);

    int dif = maxim - mini;
    
    cout << dif << endl;
}
