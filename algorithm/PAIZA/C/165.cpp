#include <iostream>
#include <iostream>
#include <vector>
#include <queue>
#include <set>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n;
    cin >> n;
    char a;
    vector<char> arr;
    for(int i = 0; i < n;i++){
        cin >> a;
        arr.push_back(a);
    };
    queue<int> curry_queue;
    queue<int> rice_queue;
    vector<pair<int, int>> results;


    for(int i = 0; i<n;i++){
        if(arr[i] == 'C'){
            // ライスが残ってる → カレーライス
            if (!rice_queue.empty()) {
                int rice_idx = rice_queue.front(); rice_queue.pop();
                results.push_back({i + 1, rice_idx});
            } else {
                curry_queue.push(i + 1);
            }
        }
        else if(arr[i] == 'R'){
            // カレーが残ってる → カレーライス
            if (!curry_queue.empty()) {
                int curry_idx = curry_queue.front(); curry_queue.pop();
                results.push_back({curry_idx, i + 1});
            } else {
                rice_queue.push(i + 1);
            }
        }
    }
    // 出力
    cout << results.size() << endl;
    for (auto &p : results) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}
