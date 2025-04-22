#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
    long long n = 100;
    long long m = 10^7;
    cin >> n >> m;
    long long sum = 10^7;
    vector<int> v(n);
    for (int i = 0; i < v.size(); i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < v.size(); i++)
    {
        sum += v[i];
    }
    if( sum > m){
        cout << "NG" << endl;
    }else{
        cout << "OK" << endl;
    }
    return 0;
}