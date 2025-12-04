#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a;
    //１個目をカウントする
    cin >> a;
    //初期値としてaを入れる
    int min = a;
    int max = a;
    long long sum = a;
    //２個目から処理を行う為初期値を１とする
    for(int i = 1; i < n;i++){
        //再度値を入れる
        cin >> a;
        //合計
        sum += a;
        if(min > a){
            min = a;
        }
        if(max < a){
            max = a;
        }
    }
    cout << min << " " << max << " " << sum << endl;
    return 0;
}