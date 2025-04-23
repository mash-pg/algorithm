#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;

    int min_day = 1000; // 十分大きい値で初期化
    int max_day = -1;   // 十分小さい値で初期化

    //s : start（出発） f : flight（フライト時間） t : terminal（到着時間）

    for (int i = 0; i < N; ++i) {
        int s, f, t;
        cin >> s >> f >> t;

        // 「パイザ氏の1日の時間」 = (出発地0時〜出発時刻sまでのs時間) + 飛行時間f + 到着地0時〜到着時刻tまでのt時間
        int day_time =s + f + (24 -t);

        // 最小・最大を更新
        min_day = min(min_day, day_time);
        max_day = max(max_day, day_time);
    }

    cout << min_day << endl;
    cout << max_day << endl;

    return 0;
}
