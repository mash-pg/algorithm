#include "/home/mash/projects/algorithm/include/template.hpp"
int main(){
    vvl matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    cout << "2行目の3列目: " << matrix[1][2] << std::endl; // 6

    return 0;

}