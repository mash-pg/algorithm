#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;

    set<string> uniqueFlowers;
    for (int i = 0; i < N; ++i) {
        string flower;
        cin >> flower;
        uniqueFlowers.insert(flower);  // 自動で重複を排除
    }

    cout << uniqueFlowers.size() << endl;
    return 0;
}
