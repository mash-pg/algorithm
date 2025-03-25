#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vl numbers = {1, 2, 2, 3, 4, 4, 5};
    set<int> unique_numbers(numbers.begin(), numbers.end());

    cout << "重複を削除: ";
    for (int num : unique_numbers) {
        cout << num << " ";
    }
    cout << endl;

    return 0;

}