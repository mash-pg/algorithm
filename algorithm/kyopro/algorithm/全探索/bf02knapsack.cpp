#include <iostream>
using namespace std;

int knapsack(int index, int weight, int W, int value[], int weightArr[], int n) {

    if (index == n){
        cout << "indexの値" << index << endl;
        cout << "nの値"<< n << endl;
        return 0;
    } else if(index != n){
        cout << "indexの値" << index << endl;
        cout << "nの値"<< n << endl;
    }
    int exclude = knapsack(index + 1, weight, W, value, weightArr, n);
    if (weight + weightArr[index] > W) return exclude;  // 重量オーバー
    
    int include = value[index] + knapsack(index + 1, weight + weightArr[index], W, value, weightArr, n);
    
    return max(include, exclude);
}

int main() {
    int value[] = {60, 100, 120};
    int weight[] = {10, 20, 30};
    int W = 50;
    int n = sizeof(value) / sizeof(value[0]);

    cout << "最大価値: " << knapsack(0, 0, W, value, weight, n) << endl;
    return 0;
}
