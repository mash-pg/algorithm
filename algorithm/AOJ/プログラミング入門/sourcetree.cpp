#include <bits/stdc++.h>
using namespace std;

int main(void){

    vector<int> vecsort(3);
    for (int i = 0; i < 3; i++)
    {
        cin >> vecsort.at(i);
    }
    
    sort(vecsort.begin(),vecsort.end());

    cout << vecsort.at(0) << " " << vecsort.at(1) << " " << vecsort.at(2) << endl;
}