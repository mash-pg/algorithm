#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    /*
    部分和問題
    N個の正の整数a1,a2,...,aN-1と正の整数がWが与えられます。
    a0,a1,...,aN-1の中から何個かの整数を選んで総和をWとすることができるかどうか
    判定してください
    N＝５、W＝10、a={1,2,4,5,11}の場合
    a0,a2,a3 = 1+4+5=10 Yes
    */
    int N,W;
    cin >> N >> W;
    vector<int> a(N);
    for(int i=0;i<N;i++){
        cin >> a[i];
    }
    //bitは2^N通りの部分集合を表す
    bool exist = false;
    //すべての分け方をを試す（2^N通り）
    for(int bit=0;bit<(1<<N);bit++){
        int sum = 0;//部分集合に含まれる要素の和
        for(int i=0;i<N;i++){
            //i番目のビットが立っているかどうか
            if(bit & (1<<i)){
                sum += a[i];
            }
        }
        if(sum == W){
            exist = true;
            break;
        }
    }
    if(exist){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}