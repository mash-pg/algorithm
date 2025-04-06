#include "/home/mash/projects/algorithm/include/template.hpp"
/*
calc_dist() が double（整数）を返してるのに sqrt() を使っている
*/

//2点(x1,y1)と(x2,y2)との距離を求める関数
double calc_dist(double x1,double y1,double x2,double y2){
    return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
int main(){
    //入力データの受取
    int N;cin >> N;
    vl x(N),y(N);
    for(int i = 0;i<N;++i) cin >> x[i] >> y[i];

    //求める値を、十分大きい値で初期化しておく
    double minimum_dist = 100000000.0;


    //探索開始
    for(int i = 0; i < N;++i){
        for(int j = i + 1; j<N ;j++){
            //(x[i],y[i])と(x[j],y[j])との距離
            double dist_i_j = calc_dist(x[i],y[i],x[j],y[j]);
                    //暫定小数値 minimun_distをdist_i_jと比べる
            if(dist_i_j < minimum_dist){
                minimum_dist = dist_i_j;

            }
        }
    }

    cout << minimum_dist << endl;
}