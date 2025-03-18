#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n;
    int a;

    const int MAX_A = 1000000;
    const int MIN_A = -1000000;

    int max = MIN_A; 
    int min = MAX_A;
    long long sum = 0;
    
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if(max < a){
            max = a;
        }
        if(min > a){
            min = a;
        }

        sum += a;
    }
    
    cout << min << " " << max << " " << sum << endl;
}