#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    vl vec = {1,2,2,524,577,2424,44};
    //autoは、右辺の内容を見て型自動的に設定してくれる
    auto max_iter = max_element(vec.begin(), vec.end());
    auto min_iter = min_element(vec.begin(), vec.end());

    ll max_index = distance(vec.begin(), max_iter);
    ll min_index = distance(vec.begin(), min_iter);
    
    std::cout << "最大値: " << *max_iter << " (インデックス: " << max_index << ")" << std::endl;
    std::cout << "最小値: " << *min_iter << " (インデックス: " << min_index << ")" << std::endl;

    return 0;
}