#include <iostream>
#include <vector>
#include <string>
#include <cmath> // ceilに必要

using namespace std;

int main(){
    int n;
    cin >> n;
    double sum = 0;
    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
    }
    double avg = sum/n;
    
    cout << ceil(avg) << endl;
    
    return 0;

}