#include "/home/mash/projects/algorithm/include/template.hpp"

int main(){
    int n;
    cin >> n;
    vector<long long> F(n);

    F[0] = 0;
    F[1] = 1;
    int result = 0;
    for(int n = 2; n < F.size(); n++){
        F[n] = F[n - 1] + F[n - 2];
        cout << n << " 項目 = " << F[n] << endl;
        result = F[n];
    }
    cout << "-------------------------" << endl;
    cout << result << endl;
    return 0;
}