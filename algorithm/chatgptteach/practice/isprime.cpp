#include <iostream>
using namespace std;

bool isprime(long long N){
    //ループ処理を減らす
    if(N < 2) return false;
    if(N == 2 || N == 3) return true;
    if(N % 2 == 0) return false;

    for(long long i = 3; i * i <= N;i += 2){//3,5,7,....だけをチェックできる
        if(N%i == 0) return false;
    }
    return true;
}

int main(){
    long long n;
    cin >> n;
    bool primetest = isprime(n);    
    cout << (primetest == true ? "prime" : "not prime") << endl;
    return 0;
}