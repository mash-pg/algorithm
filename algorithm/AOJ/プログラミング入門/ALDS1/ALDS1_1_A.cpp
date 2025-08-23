#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>

using namespace std;
void printArr(const vector<int>& a){
    for (size_t i = 0; i < a.size(); i++)
    {
        if(i) cout << " ";
        cout << a[i];
    }
    cout << endl; 
}

int main(){
    //同期を消す
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    if(!(cin >> N)) return 0;
    vector<int> A(N);
    for(int i = 0;i<N;++i) cin >> A[i];

    //初期状態を表示
    printArr(A);
    //挿入ソート
    for (int i = 1; i < N; i++)
    {
        
        int v = A[i];
        int j = i -1;
        while(j >= 0 && A[j] > v){
            A[j+1] = A[j];
            --j; 
        }
        A[j+1] = v;

        printArr(A);
    }

    return 0;
    
}
