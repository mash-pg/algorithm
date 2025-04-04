#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    int a = 3;
    int &b = a;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

    b = 4;

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;

}