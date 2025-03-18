#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    int Tcode;
    cin >> n;
    cin >> Tcode;

    vector<int> Hcode(n);
    vector<string> Hmei(n);

    for(int i = 0; i < n; i++) {
        cin >> Hcode[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> Hmei[i];
    }

    int cnt = -1;
    for (int i = 0; i < n; i++) {
        if (Hcode[i] == Tcode) {
            cnt = i;
            break;
        }
    }

    if (cnt != -1) {
        cout << Hmei[cnt] << endl;
    } else {
        cout << "Code not found" << endl;
    }

    return 0;
}

/*
繰返し回数
検索要素数
検索要素一覧
検索文字列
5
111 
111 222 333 105 233
aaa bbb ccc ddd eee
*/ 