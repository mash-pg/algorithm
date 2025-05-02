#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> freq;

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        freq[v[i]]++; // 出現回数をカウント
    }

    // 最大出現回数を探す
    int max_count = 0;
    for (auto [num, count] : freq) {
        if (count > max_count) {
            max_count = count;
        }
    }

    // 出現回数が最大の数を出力
    vector<int> result;
    for (auto [num, count] : freq) {
        if (count == max_count) {
            result.push_back(num);
        }
    }

    for (size_t i = 0; i < result.size(); i++)
    {
        if(i != result.size() - 1){
            cout << result[i] << " ";
        }else{
            cout << result[i];
        }
    }
    

    cout << endl;
    return 0;
}
