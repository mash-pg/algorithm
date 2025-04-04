#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    int a = 123;
    int &b = a;
    
    cout << a << endl;
    cout << b << endl;

    b = 124;
    cout << a << endl;
    cout << b << endl;
    string s = "apg4g";
    string &t = s;

    cout << s << endl;
    cout << t << endl;

    t = "apg5g";
    cout << s << endl;
    cout << t << endl;

    vl v = {1,2,3,4,5};
    vl &w = v;
    for(int num1 : v) cout << num1;
    ce;
    for(int num : w) cout << num;
    ce;

    w = {1,2,3,4,5,6};
    for(int num1 : v) cout << num1;
    ce;
    for(int num : w) cout << num;
    ce;


}