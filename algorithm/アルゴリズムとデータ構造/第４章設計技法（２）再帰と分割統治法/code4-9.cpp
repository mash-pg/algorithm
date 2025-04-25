#include "/home/mash/projects/algorithm/include/template.hpp"

/*
    部分和問題（再帰処理）
    N個の正の整数a0,a1,....an-1と正の整数Wが与えられます。
    a0,a1,....,an-1の中から何個かの整数を選んで総和をＷとすることができるかどうかを判定してください。

    教科書でan-1をえらばないときとan-1を選ぶときと分ける理由はなんですか？
    最後の要素 aₙ₋₁ を 使わない としたら： → n-1 個の中で W を作れるか？ → solve(n-1, W)    
    ※n-1を使わないとa0 - an-2なのでn-1個使う
    最後の要素 aₙ₋₁ を 使う としたら： → n-1 個の中で W - aₙ₋₁ を作れるか？ → solve(n-1, W - a[n-1])
*/
// 1. a[2] = 7 を「使わない」
// → 残り a = {3, 5} で w = 10 を作れるか
// → func(2, 10, a)

// 2. a[2] = 7 を「使う」
// → 残り a = {3, 5} で w = 10 - 7 = 3 を作れるか
// → func(2, 3, a)


// a = {3, 5, 7}, w = 10
// func(3, 10)

// ├── func(2, 10)  // 7を使わない
// │   ├── func(1, 10)  // 5を使わない
// │   │   ├── func(0, 10) → false
// │   └── func(1, 5)   // 5を使う
// │       ├── func(0, 5) → false
// ├── func(2, 3)   // 7を使う（10 - 7）
// │   ├── func(1, 3)   // 5を使わない
// │   │   ├── func(0, 3) → false
// │   └── func(1, 0)   // 5を使う（3 - 3）
// │       ├── func(0, 0) → true 🎯

bool func(int i,int w,const vector<int> &a){
    if(i == 0){
        if(w == 0) return true;
        else return false;
    }
    //a[i -1]を選ばない場合
    if(func(i-1,w,a))return true;
    //a[i -1]を選ぶ場合
    if(func(i-1,w-a[i-1],a)) return true;
    //どちらもfalseならばfalse
    return false;

}

int main(){
    //入力
    int n,w;
    cin >> n >> w;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    if(func(n,w,a)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    return 0;
}