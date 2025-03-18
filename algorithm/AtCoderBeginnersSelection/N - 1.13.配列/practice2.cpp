#include <bits/stdc++.h>
using namespace std;

int main() {
    // int N;
    // cin >> N;

    // vector<int> math(N);
    // vector<int> english(N);

    // //数学の点数を受け取る
    // for(int i =0; i<N;i++){
    //     cin >> math.at(i);
    // }
    // for(int i =0; i<N;i++){
    //     cin >> english.at(i);
    // }

    // for(int i = 0;i<N;i++){
    //     cout << math.at(i) + english.at(i) <<endl;
    // }

    // vector<int> vec = {1,2,3};

    // //末尾追加
    // vec.push_back(100);
    // vec.push_back(100);
    // vec.push_back(1);

    // //末尾削除
    // vec.pop_back();


    // for(int i = 0; i < vec.size();i++){
    //     cout << vec.at(i) << endl;
    // }

    vector<int> vec(3,10);
    vec =  vector<int>(100,2);

    for(int i =0; i< vec.size();i++){
        cout << vec.at(i) << endl;
    }
} 