#include "/home/mash/projects/algorithm/include/template.hpp"
int sum(int n) {
    int total = 0;
    rep(i, n+1) total += i;
    return total;
}

int main(){
    int n;
    cin >> n;
    cout << endl;
    cout << sum(n);
}