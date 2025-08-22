#include <bits/stdc++.h>
using namespace std;

int main(void){
int m, f, r;
char grading[5];
char ans;
//成績データの格納
for (int i = 0; i < 5; i++)
{
    grading[0] = 'A';
    grading[1] = 'B';
    grading[2] = 'C';
    grading[3] = 'D';
    grading[4] = 'F';
}

while(1){
    scanf("%d %d %d", &m, &f, &r);
    int point = m + f;
    if(m == -1 && f == -1 && r == -1) break;
    if(m == -1 || f == -1){
        ans = grading[4];
        cout << ans << endl;
    }
    else if(point >= 80){
        ans = grading[0];
        cout << ans << endl;
    }
    else if(point < 80 and point >= 65){
        ans = grading[1];
        cout << ans << endl;
    }
    else if(point < 65 and point >= 50){
        ans = grading[2];
        cout << ans << endl;
    }else if(point < 50 and point >= 30){
        if(r >= 50){

            ans = grading[2];
            cout << ans << endl;
        }else{
            ans = grading[3];
            cout << ans << endl;
        }

    }
    if(point < 30){
        ans = grading[4];
        cout << ans << endl;
    }
}

return 0;

}