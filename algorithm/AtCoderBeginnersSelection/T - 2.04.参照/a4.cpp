#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

int main(){
    string s = "apg4b";
    string &t = s;

    t.at(0) = 'A';
    t.at(1) = 'P';
    t.at(2) = 'G';

    cout << s << endl;
    cout << t << endl;
    

}