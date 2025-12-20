#include <iostream>
#include <vector>

using namespace std;

int main(){
    //配列を作る
    vector<int> A = {1,2,3,4,5,6};
    int N = A.size();
    vector<long long> P(N+1,0);
    for(int i = 0; i< N;i++){
        P[i + 1] = P[i] + A[i];
    }

    long long sum = P[4] -P[1];
    cout << sum << endl;
    return 0;
}