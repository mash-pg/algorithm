#include <iostream>

using namespace std;

const int MAX_N = 10000;


int main(){
    /**
     * 最も長い棒の長さ < ほかの２本の長さの和が条件式になります
    */
    int n, a[MAX_N];
    cin >> n;
    int ans = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    //棒を重複しないで選ばないようi < j < k となるようにしている
    for(int i = 0; i< n; i++){
        for (int j = i + 1; j < n; j++){
            for (int k = j + 1; k < n; k++){
                int len = a[i] + a[j] + a[k];
                int ma = max(a[i],max(a[j],a[k]));
                int rest = len - ma;

                if(ma < rest){
                    ans = max(ans,len);
                }
            }
        }
    }

    cout << ans << endl;
}