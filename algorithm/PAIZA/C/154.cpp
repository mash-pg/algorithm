#include <iostream>
#include <vector>
#include <string>
#include <cmath> // ceilに必要
#include <algorithm>
using namespace std;

int main(){

    int n , l;
    cin >> n >> l;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    //ソートする
    sort(v.begin(), v.end(),std::greater<int>{});
    //配列から最大値を取得して半分にする
    //半額クーポンを使う条件
    if(v[0] >= l){
        int max = v[0];
        int half = max / 2;
        v[0] = half;
    }
    //配列の先頭をhalfと入れ替える
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    cout << sum << endl;
    return 0;

}