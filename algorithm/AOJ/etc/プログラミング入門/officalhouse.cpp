#include <bits/stdc++.h>
using namespace std;

int main(void){
    int n,b,f,r,v;
    cin >> n;
    int h[4][3][10] = {0};
    //0からなのでそれぞれの配列にvの値を入れる
    for(int i = 0; i < n;i++){
        cin >> b >> f >> r >> v;
        h[b-1][f-1][r-1] += v; 
    }
    for(int  i = 0; i < 4;i++){
        for(int j = 0; j < 3;j++){
            for(int k = 0; k < 10; k++){
                cout <<" "<< h[i][j][k];
            }
            cout << endl;   
        }

		if (i < 3) {
			cout << "####################" << endl;
		} 
    }
}