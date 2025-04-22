#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

    string w;
    cin >> w;

    //小文字に変換（大文字・小文字の区別をしないため）
    transform(w.begin(), w.end(), w.begin(), ::tolower);
    
    string word;
    int count = 0;

    while(cin >> word){
        if(word == "END_OF_TEXT"){
            break;
        }
        //入力された単語も小文字に変換
        transform(word.begin(), word.end(), word.begin(), ::tolower);

        if(word == w){
            count++;
        }
    }
    
    cout << count << endl;
    return 0;
}