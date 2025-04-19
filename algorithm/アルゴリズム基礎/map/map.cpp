#include <iostream>
#include <map>
#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string , int> score;

    score["Alice"] = 90;
    score["Bob"] = 75;
    score["Charlie"] = 88;
    sort(score.begin(), score.end());

    cout << "Aliceの点数:" << score["Alice"] << endl;
}