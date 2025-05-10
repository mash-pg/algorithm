#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"


class SegmentTree{
    public:
        int size;
        vector<ll> tree;
        //初期化：最初の２のべき乗サイズに拡張する
        void init(int n){
            size = 1;
            while(size < n) size *= 2;
            tree.assign(2 * size, 0);
        }
        //配列aで木を構築
        void build(const vector<ll>& a){
            for(int i = 0; i< a.size();++i){
                // 例：tree[8]〜tree[15] に a[0]〜a[7] を代入
                tree[size + i] = a[i]; 
            }
            for(int i = size - 1; i >= 1; --i){
                tree[i] = tree[2 * i] + tree[2 * i + 1];
            }
        }

};