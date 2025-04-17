#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    int p;
    vector<int> a(n);
    //サンプル
    //4
    //3 12 9 9
    //上記入力に対して、上から順に順位を決める

    for(int i = 0; i < n; i++) {
        cin >> p;
        a.at(i) = p;
    }
    for (int i = 0; i < n; i++)
    {
        //人1がrank何位か
        int rank = 1;
        for (int j = 0; j < n; j++)
        {
            if (a.at(j) > a.at(i))
            {
                rank++;
            }
        }
        //rankを出力
        cout << rank << endl;
    }
    return 0;
}