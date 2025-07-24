#include <iostream>
#include <algorithm>
#include <queue>
#include <stack>
#include <cmath>

using namespace std;

const int MAX_N = 1000000;

int main(){
    queue<int> que;
    int n = 3;
    for(int i = 1; i <= n; i++){
        que.push(i);
    }
    cout << que.front() << endl;
    que.pop();
    cout << que.front() << endl;
    que.pop();
    cout << que.front() << endl;
    que.pop();
    
    return 0;
}
