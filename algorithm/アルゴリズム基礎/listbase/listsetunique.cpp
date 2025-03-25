#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vl numbers = {1, 2, 2, 3, 4, 4, 5};
    
    sort(numbers.begin(), numbers.end());
    auto last = unique(numbers.begin(), numbers.end());
    numbers.erase(last, numbers.end());

    cout << "重複を削除: ";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << endl;

}