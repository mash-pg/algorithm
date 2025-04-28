#include <iostream>
#include <vector>
using namespace std;

int main(){
    //挿入ソート
    int n;
    cin >> n;
    vector<int> a(n);
    //vector<int> result(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //5枚のうち１枚を基準にする
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while (j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}