#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    int a = 123;
    int &b = a;//変数aへの参照
    int &c = b;//変数aへの参照（変数bへの参照ではない）

    c = 1234;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    

}