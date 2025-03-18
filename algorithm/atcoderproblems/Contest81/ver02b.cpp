#include <iostream>
#include <vector>
using namespace std;

int main() {
	int n;
    int arr[210];
    cin >> n;

    for (int i = 0; i < n; ++i) cin >> arr[i];
    
    int res = 0;
    
    //操作が行える限り操作を繰り返す
    while(true){
        //全て偶数かどうかを判定するフラグ
        bool exist_odd = false;

        for (int i =0; i < n; ++i){
            //奇数があればフラグを立てる
            if(arr[i] % 2 != 0){
                exist_odd = true;
                //break;
            }
        }
        //奇数があったらbreak
        if(exist_odd){
            break;
        }
        //操作を行えるなら操作を実際に行う
        for(int i = 0; i < n; ++ i){
            arr[i] /= 2;
        }
    
        ++res;
    }
    cout << res << endl;
    return 0;
}
