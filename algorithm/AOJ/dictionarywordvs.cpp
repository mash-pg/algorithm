#include<iostream>
#include<string>
using namespace std;
int main(){

    int n;
    cin >> n;
    int taro_score = 0;
    int hanako_score = 0;
    for(int i = 0; i < n; i++ ){
        string taro_card,hanako_card;
        cin >> taro_card >> hanako_card;
        if (taro_card > hanako_card) {
            taro_score += 3;
        } else if (taro_card < hanako_card) {
            hanako_score += 3;
        } else {
            taro_score += 1;
            hanako_score += 1;
        }
    }

    cout << taro_score << " " << hanako_score << endl;

    return 0;
}