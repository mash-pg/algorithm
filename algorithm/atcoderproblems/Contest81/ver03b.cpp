#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int count = 0;
    vector<int> arr;
    for (int i = 0; i < n; i++)
    {   
        int a;
        cin >> a;
        arr.push_back(a);
    }
    //配列の中身に奇数があれば処理が終了する
    while (true)
    {
        bool odd = false;
        for (int i = 0; i < n; i++)
        {
            //配列の中身が奇数かどうかを調べる
            if (arr[i] % 2 != 0)
            {
                odd = true;
                break;
            }
        }
        //配列の中身が奇数なら処理を終了する
        if (odd)
        {
            break;
        }
        count++;
        //配列の中身を2で割る
        for (int i = 0; i < n; i++)
        {
            arr[i] /= 2;
        }
    }
    
    
    cout << count << endl;
    
    return 0;
}
