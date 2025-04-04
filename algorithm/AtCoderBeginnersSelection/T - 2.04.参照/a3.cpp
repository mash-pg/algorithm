#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    int a = 0;
    int &b = a;
    b = b + 1;

    cout << a << endl;

}