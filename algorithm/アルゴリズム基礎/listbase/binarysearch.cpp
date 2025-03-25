#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vl numbers = {1, 3, 5, 7, 9};
    ll target = 15;

    bool found = binary_search(numbers.begin(),numbers.end(),target);
    cout << (found ? "見つかりました" : "見つかりません");

    return 0;

}