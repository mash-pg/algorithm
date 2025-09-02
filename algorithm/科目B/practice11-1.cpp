#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
        vector<long long> a(4);
        a = {2,3,4,1};
        int n,m;
        cout << "前：";
        for(int i = 0;i < a.size();i++){
            cout << a[i];
        }
        cout << endl;
        for(int n = 0;n < a.size();n++){
            for(int m = 0; m < a.size();m++){
                if(a[m] > a[n]){
                    int tmp;
                    tmp = a[m];
                    a[m]  = a[n];
                    a[n] = tmp;
                };
            }
        };
        cout << "後：";
        for(int i = 0;i < a.size();i++){
            cout << a[i];
        }
}