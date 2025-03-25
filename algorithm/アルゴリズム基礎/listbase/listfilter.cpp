#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vl numbers = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vl evens;
    copy_if(numbers.begin() , numbers.end() , back_insert_iterator(evens),
            [](int x) {return x % 2 == 0;});
    cout << "偶数のみ：" ;
    for(int num : evens){
        cout << num << " ";
    }

    cout << endl;

    return 0;
}