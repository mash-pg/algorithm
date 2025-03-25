#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vl vec = {1,2,3,4,5};
    cout << "2番目の要素：" <<vec[1] << endl;
    cout <<  "最後の要：" << vec.back() << endl;
    
    vec.push_back(6);
    cout << "追加後の最後の要素：" << vec.back() << endl;

    vec.pop_back();
    cout << "削除後の最後の要素：" << vec.back() << endl;

    return 0;
}