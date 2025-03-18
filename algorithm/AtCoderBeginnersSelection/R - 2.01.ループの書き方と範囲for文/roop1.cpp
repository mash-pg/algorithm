#include <bits/stdc++.h>
using namespace std;
 
 int main(void){

    int a;
    cin >> a;
    vector<int> data(5);

    int answer = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> data.at(i);
    }
    for(int i  = 0; i<5;i++){
        if(data.at(i) == a){
            answer++;
        }   
    }

    cout << answer << endl;
 }