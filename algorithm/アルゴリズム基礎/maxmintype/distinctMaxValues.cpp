#include "/home/mash/projects/algorithm/include/template.hpp"
//異なる最大値・最小値のペアを求める
pair<ll,ll> distinctMaxValue(vl &vec){
    set<ll,greater<ll>> unique_value(vec.begin(),vec.end());
    if(unique_value.size() < 2) return {-1,-1};
    
    auto it = unique_value.begin();
    int max1 = *it;
    int max2 = *(++it);

    return {max1,max2};

}
pair<ll,ll> distinctMinValue(vl &vec){
    set<ll> unique_value(vec.begin(),vec.end());
    if(unique_value.size() < 2) return {-1,-1};
    
    auto it = unique_value.begin();
    ll min1 = *it;
    ll min2 = *(++it);

    return {min1,min2};

}

int main(){
    vl vec = {7,3,5,2,3,56,13,0};
    auto result = distinctMaxValue(vec);
    cout << "最大値1：" << result.first << endl;
    cout << "最大値2：" << result.second << endl;
    auto result1 = distinctMinValue(vec);
    cout << "最小値1：" << result1.first << endl;
    cout << "最小値2：" << result1.second << endl;
    return 0;
}