#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    int cnt = 0;
    vector<string> menu(n);
    for (int i = 0; i < n; i++) {
        cin >> menu[i];
    }
    for (int i = 0; i < n; i++)
    {
        if(menu[i] == s){
            cnt++;
        }
    }
    
    if(cnt == 0){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
    }

    return 0;
}