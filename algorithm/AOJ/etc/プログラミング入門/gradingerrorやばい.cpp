#include <bits/stdc++.h>
using namespace std;

int main(void){
    int m;
    int f;
    int r;
    //cin >> m >> f >> r;
    int test[50][3] = {0};
    string grading[5];
    //成績データの格納
    for (int i = 0; i < 5; i++)
    {
        grading[0] = "A";
        grading[1] = "B";
        grading[2] = "C";
        grading[3] = "D";
        grading[4] = "F";
    }
    
    //入力データの格納
    for(int i = 0; i < 50; i++){
        for (int j = 0; j < 3; j++)
        {   
            cin >> test[i][j];
        }
    }
    // //入力データの処理
    // for(int i = 0; i < 3; i++){
    //     int ans = 0;
    //     string grad;
    //     for (int j = 0; j < 50; j++)
    //     {
    //         //m、f、r がすべて-1
    //         if(test[0][j] == -1 && test[1][j] == -1 && test[2][j] == -1) {
    //             break;
    //         }
    //         //行の末尾が-1の場合は、ansに+1する
    //         if(test[i][j] == -1){
    //             ans = -1;
    //         }else{
    //             ans += test[i][j];
    //         }
    //         //中間と期末両方欠席
    //         if(test[0][j] == -1 && test[1][j] == -1) {
    //             grad = grading[4];
    //         }
    //         //ansが８０以上の場合
    //         if(ans >= 80){
    //             grad = grading[0];
    //         }
    //         //ansが６５以上８０未満のば場合
    //         if(ans >= 65 and ans < 80){
    //             grad = grading[1];
    //         }
    //         //ansが６５以上８０未満のば場合
    //         if(ans >= 50 and ans < 65){
    //             grad = grading[2];
    //         }
    //         //ansが30以上50未満のば場合
    //         if(ans >= 30 and ans < 50){
    //             //再試験の点数が50以上なら
    //             if(test[i][2] >= 50){
    //                 grad = grading[2];
    //             }else{
    //                 grad = grading[3];
    //             }
    //         }
    //         //中間試験と期末試験の合計点数が 30 未満ならば成績は F
    //         if(ans < 30){
    //             grad = grading[4];
    //         }

    //     }
    //     cout << grad << endl;
    // }
}