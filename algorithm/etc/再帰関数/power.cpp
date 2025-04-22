#include "/home/mash/projects/algorithm/include/template.hpp"
//#include "/home/mash/project/algorithm/algorithm/include/template.hpp"

//べき乗
int power(int n,int m){
    if(m == 0) return 1;
    return n * power(n,m-1);
}

int main(){
    int n,m;
    cin >> n >> m;
    cout << power(n,m);
    return 0;
}