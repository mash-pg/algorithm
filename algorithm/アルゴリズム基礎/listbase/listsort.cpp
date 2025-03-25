#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vl numbers = {5,3,8,1,9,2};

    sort(numbers.begin(),numbers.end(),greater<int>());
    cout << "降順ソート:" ;
    for(int num : numbers) cout << num << " ";
    sort(numbers.begin(),numbers.end());
    cout << "昇順ソート:" ;
    for(int num : numbers) cout << num << " ";
    cout << endl;

    return 0;

}