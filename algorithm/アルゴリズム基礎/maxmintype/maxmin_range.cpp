#include "/home/mash/projects/algorithm/include/template.hpp"

ll secondMax(vl &vec){
    if(vec.size() < 2) return -1;
    sort(vec.begin(),vec.end(),greater<ll>());
    return vec[1];
}

ll secondMin(vl &vec){
    if(vec.size() < 2) return -1;
    sort(vec.begin(),vec.end());
    return vec[1];
}

ll secondOnmax(vl &vec){
    if(vec.size() < 2) return -1;
    int max1 = INT_MIN,max2 = INT_MIN;
    for(int num : vec){
        if(num > max1){
            max2 = max1;
            max1 = num;
        }else if(num > max2 && num < max1){
            max2 = num;
        }
    }
    return (max2 == INT_MIN) ? -1 : max2;
}
int secondOnmin(vl &vec){
    if (vec.size() < 2) return -1;
    ll min1 = LLONG_MAX, min2 = LLONG_MAX;
    for (ll num : vec) {
        if (num < min1) {
            min2 = min1;
            min1 = num;
        } else if (num < min2 && num > min1) {
            min2 = num;
        }
    }
    return (min2 == LLONG_MAX) ? -1 : min2;
}
int minmaxrange(vl &vec){
    int left = 2,right = 6;
    
    int max_value = vec[left];
    int min_value = vec[left];

    for(size_t i = left; i <= right;i++){
        if(vec[i] > max_value) max_value = vec[i];
        if(vec[i] < min_value) min_value = vec[i];
    }

    cout << "範囲内の最大値：" << max_value << endl;
    cout << "範囲内の最小値：" << min_value << endl;
    return 1;
}
int main(){
    vl vec = {7,3,5,2,3,56,13,0};
    //vec
    cout << "2番目に大きい値：" <<secondMax(vec) << endl;
    cout << "2番目に小さい値：" <<secondMin(vec) << endl;
    //O(n)
    cout << "2番目に大きい値：" <<secondOnmax(vec) << endl;
    cout << "2番目に小さい値：" <<secondOnmin(vec) << endl;
    //範囲指定[2,6]
    ll left = 2,right = 6;
    auto max_iter = max_element(vec.begin() + left,vec.begin() + right + 1);
    auto min_iter = min_element(vec.begin() + left,vec.begin() + right + 1);
    cout << "範囲内の最大値：" << *max_iter << endl;
    cout << "範囲内の最小値：" << *min_iter << endl;
    minmaxrange(vec);
    return 0;
}