#include <bits/stdc++.h>
using namespace std;

int main(){


    int N;
    cin >> N;

    vector<int> vec(N);
    
    for(int i = 0; i < N;i++)  cin >> vec.at(i);
    int sum =0;
    for (int i = 0; i < N; i++)
    {
        sum += vec.at(i);
    }

    int mean = sum/N;

    //cout << mean;
    for (int i = 0; i < N; i++)
    {
        //cout << vec.at(i) << endl;
        if((vec.at(i) - mean) > 0){
            cout << vec.at(i) - mean << endl;
        }else{  
            cout << mean - vec.at(i) << endl;
        }
    }
    

    // cout << N;
    // float ave = x/N;
    

    //for(int i = 0; i< N;i++) cout << vec.at(i);


}