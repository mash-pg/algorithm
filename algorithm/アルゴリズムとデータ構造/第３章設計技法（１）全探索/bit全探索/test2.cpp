#include "/home/mash/projects/algorithm/include/template.hpp"
//列挙系

int main(){
    vector<int> a = {1,3,5,9};
    int N = a.size();
    int min_diff = INT_MAX;
    //すべての分け方をを試す（2^N通り）
    for(int bit = 0; bit < (1 << N); bit++){
        int sum1 = 0;
        int sum2 = 0;
        
        for(int i = 0; i < N; i++){
            if(bit & (1 << i)){
                sum1 += a[i];//１グループ
            }else{
                sum2 += a[i];//２グループ
            }
        }
        //absは絶対値（-5は5）
        int diff = abs(sum1 - sum2);
        min_diff = min(min_diff, diff);
    }

    cout << min_diff << endl;

}